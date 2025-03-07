import React from 'react';
import Timer from '../Timer/Timer.jsx';
import PropTypes from 'prop-types';
import './Titlebar.css';
import {Row, Col } from 'react-bootstrap';

export default class Titlebar extends React.Component {
	constructor(props) {
		super(props);
		this.state = { text: props.title || 'Purdue ROV 2019' };
	}

	render() {
		return (
			<div className='title'>
				<Col className='col-align'>
					Purdue ROV Main Screen
				</Col>

				<Col>
					<Timer></Timer>
				</Col>
			</div>
		);
	}
}

Titlebar.propTypes = {
	title: PropTypes.string.isRequired
};