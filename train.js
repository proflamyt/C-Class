var prompt = require('prompt');

//
// Start the prompt
//
prompt.start();

//
// Get two properties from the user: username and email
//
prompt.get(['shout', 'dontshout'], function (err, result) {
  //
  //
  console.log('What did you shout :');
  console.log('You shouted : ' + result.shout.toUpperCase());
  console.log('You didnt shout ' + result.dontshout.toLowerCase() );
});