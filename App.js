/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow strict-local
 */

import {NativeBaseProvider, Text} from 'native-base';
import React from 'react';
import {SafeAreaView, StatusBar, View} from 'react-native';

const App = () => {
  return (
    <NativeBaseProvider>
      <SafeAreaView>
        <StatusBar barStyle={'dark-content'} />
        <View>
          <Text>Native Base</Text>
        </View>
      </SafeAreaView>
    </NativeBaseProvider>
  );
};

export default App;
