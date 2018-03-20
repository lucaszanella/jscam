import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
//const http = require('http');
//const cam = require('onvif').Cam;

//import {Cam} from 'onvif/lib/onvif_react';
import {Cam} from 'onvif';


//const crypto = require('crypto');
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