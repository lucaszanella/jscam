import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
import JRTP from './JRTPLIB';

JRTP.show('Awesome', JRTP.SHORT);
JRTP.rtspInit('rtsp://192.168.1.165:10554');
//const http = require('http');
//const cam = require('onvif').Cam;

//import {Cam} from 'onvif/lib/onvif_react';
//import onvif from 'onvif';
//import crypto from './node_modules/onvif/lib/cam.js'
//const crypto = require('crypto');

const onvif = require('onvif');

cam = new onvif.Cam({
  hostname: '192.168.1.155',
  username: 'admin',
  password: '888888',
  port:'10080'
}, function(err) {
  this.getStreamUri({protocol:'RTSP'}, function(err, stream) {
    console.log(stream.uri);
  })
});

export default class App extends React.Component {
  render() {
    return (
      <View style={styles.container}>
        <Text>Hello World</Text>
        <Text>live edit 8</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});

console.log('hey');
//console.log(crypto.createDiffieHellman(256));