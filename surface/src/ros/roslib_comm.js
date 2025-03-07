const ROSLIB = require('roslib');


const ros = new ROSLIB.Ros({
    url : 'ws://localhost:9090'
});

ros.on('connection', function() {
    console.log('Connected to websocket server.');
});

ros.on('error', function(error) {
    console.log('Error connecting to websocket server: ', error);
});

ros.on('close', function() {
    console.log('Connection to websocket server closed.');
});


/*var upstream = new ROSLIB.Topic({ //for subscribing
  ros : ros,
  name : '/upstream_data',
  messageType : 'std_msgs/Twist'
}); */

/*upstream.subscribe(function(message) {
  console.log('Received message on ' + upstream.name + ': ' + message.data);
}); */


const cmdVel = new ROSLIB.Topic({ //for publishing
  ros : ros,
  name : '/downstream_data',
  messageType : 'shared_msgs/controller_msg'//'geometry_msgs/Twist'
});

module.exports = function(data) {
  /*
  const twist = new ROSLIB.Message({
    linear : {
      x : 0.1,
      y : 0.2,
      z : 0.3
    },
    angular : {
      x : -0.1,
      y : -0.2,
      z : -0.3
    }
  }); for testing purposes*/

  const packet = new ROSLIB.Message({
    RX_axis: data.RSX ? data.RSX : 0,
    RY_axis: data.RSY ? data.RSY : 0,
    LX_axis: data.LSX ? data.LSX : 0,
    LY_axis: data.LSY ? data.LSY : 0,
    a: data.A ? data.A : 0,
    b: data.B ? data.B : 0,
    x: data.X ? data.X : 0,
    y: data.Y ? data.Y : 0,
    Rtrigger: data.RT ? data.RT : 0,
    Ltrigger: data.LT ? data.LT : 0
  }); 
  cmdVel.publish(packet)
}