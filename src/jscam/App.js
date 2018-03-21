import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
//const http = require('http');
//const cam = require('onvif').Cam;

//import {Cam} from 'onvif/lib/onvif_react';
//import onvif from 'onvif';
//import crypto from './node_modules/onvif/lib/cam.js'
//const crypto = require('crypto');

const onvif = require('onvif');

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