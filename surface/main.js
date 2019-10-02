const {ipcMain, app, BrowserWindow } = require('electron');
const {fork} = require('child_process');

const CALIBRATE_CALL = 'calibrate-gamepad';

const windowFiles = [
	'dist/Window1.html',
	'dist/Window2.html'
];

let windows = [];

function createWindow(idx) {
	const windowFile = windowFiles[idx];
	windows[idx] = new BrowserWindow({ width: 1600, height: 1200, webPreferences: {webSecurity: false, nodeIntegration: true } });

	windows[idx].loadFile(windowFile);
	const { default: installExtension, REACT_DEVELOPER_TOOLS } = require('electron-devtools-installer');

    installExtension(REACT_DEVELOPER_TOOLS);

	windows[idx].webContents.openDevTools();
		
	windows[idx].on('closed', () => {
		windows[idx] = null;
	});
}

app.on('ready', () => {
	createWindow(0);
	//createWindow(1);
});

app.on('window-all-closed', () => {
	// On macOS it is common for applications and their menu bar
	// to stay active until the user quits explicitly with Cmd + Q
	if (process.platform !== 'darwin') {
		app.quit();
	}
});

app.on('activate', () => {
	if (windows[0] === null){
		createWindow(0);
	}
	if (windows[1] === null) {
		createWindow(1);
	}
});

ipcMain.on(CALIBRATE_CALL, (event, args) =>{
	//Do concurrent stuff here
});
