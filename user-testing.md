Usability Testing
===

##Test plan

###Usability Goals

The main high-level goal of our system is learnability. We want the users to be able to learn how to use the system without external help, and in a reasonable amount of time. The goals of this usability test plan are the following:

* The user successfully completes at least 90% of the tasks without any external help. 
* The logical groups are easy to locate on the controller (takes <3 seconds to find a section).
* The functions within each group are easy to locate (takes <2 seconds to find a function within its section).
* The controls are intuitive (the user properly uses the control in his/her first try).
* The user finds the system easy to use.
* The user learns how to use all the functions of the system in 30-45mins.

###Benchmark Tasks

####Music Library:

Task - Failure Condition(s):
1. Open music library - user fails to locate the music library view button
2. Navigate to a certain subfolder in the library - user fails to locate the folder scroll knob, or user cannot open a folder to view subfolder
3. Choose a certain song in the selected subfolder - user fails to locate the track list scroll knob
4. Load a song to the right-hand side deck - User cannot use the load L/R button or presses the wrong button
5. Play the loaded song - user plays the wrong deck
6. Pause the song currently playing - user cannot pause the song

####Effects:

Task - Failure Condition(s):
1. Open the list of available effects - user does not figure out how to open the list
2. Select and load a particular effect into position 2 - user does not understand the concept of loading positions, or user cannot load the effect in the required position
3. Enable an effect loaded in position 2 - user enables the wrong position
4. Change intensity of effect in position 2 - user fails to locate the proper effect intensity knob
5. Deduce if an effect is loaded in position 3 and is activated - user does not understand the lighting of FX enable buttons

####Loop and Beat Jump:

Task - Failure Condition(s):
1. Enable looping for the next 8 beats - user fails to find the 8 beat jump button
2. Disable looping - user does not figure out that clicking on loop button again disables it
3. Jump 16 beats backwards - user fails to find the 16 beat backward jump button, or user confuses forward and backward 16 beat jumps (+/-)

####Jog Strip:

Task - Failure Condition(s):
1. Play a loaded song at a specific location - user does not figure out how to use the jog strip
2. Jog through a song currently playing -user does not figure out how to use the jog strip

####Equalizer and mixer:

Task - Failure Condition(s):
1. Disable the bass frequency on the left deck - user fails to locate the kill button
2. Increase treble on right deck - user fails to locate the proper treble knob
3. Fade out the left side track and fade in the right side track - user cannot use the cross-fader slider properly

####Volume/Cue:

Task - Failure Condition(s):
1. Increase the volume of the right-hand side deck - user uses an incorrect control
2. Cue what is playing on the left-hand side deck - user fails to locate the proper cue button
3. While cueing, mix cue output and music played on the speakers to the headphones - user fails to locate the proper slider

####Failure Conditions common to all tasks: 

- The task was not completed.
- The function was not found.
- The user used the hardware in the wrong way.
- The user takes more than 5 seconds to complete a subtask.
- The user needed external help to complete a task.

###Documents

[User Introduction](https://docs.google.com/document/d/1Uqlg5NeyV_qKUGPVtHuLunNhHQucWNXHWvMHDMS9XFo/edit)
[Consent Form](https://docs.google.com/document/d/17wrVnU23yGTYl-FJsWcVXmm-SPojYX_51Yj5Gx1V1j4/edit)
[Pre-Test Questionnaire](https://docs.google.com/document/d/1nMBYLolMiGOzc9rLJ1_f_oD0CTjRssa5Dil0Rl7HG7k/edit?usp=sharing)
[Post-Test Questionnaire](https://docs.google.com/document/d/1g3AbnvD5K71oKmXCrWbXVeu87Pz4Gemadjvd6S8aHEo/edit?usp=sharing)
[Test Script](https://docs.google.com/document/d/1GqhpbHocry9VZt0s7bS-AEwccdAOxiIOFzlLTOfCftU/edit?usp=sharing)

###Test Results

Benchmark task results of two users:

####Music Library

Task - Observations/Comments:

1. Open music library - users instantly completed the task
2. Navigate to a certain sub-folder in the library - users instantly completed the task
3. Choose a certain song in the selected subfolder - users instantly completed the task
4. Load a song to the right-hand side deck - users instantly completed the task
5. Play the loaded song - users instantly completed the task
6. Pause the song currently playing - users instantly completed the task

####Effects

Task - Observations/Comments:

1. Open the list of available effects - users instantly completed the task
2. Select and load a particular effect into position 2 - there was confusion with the order of operations to load effects; rather than selecting an effect channel and scrolling through it, users tried to scroll first.
3. Enable an effect loaded in position 2 - users instantly completed the task
4. Change intensity of effect in position 2 - there was confusion between the effect intensity and effect volume knobs due to their resemblance
5. Deduce if an effect is loaded in position 3 and is activated - inadequate feedback on the console

####Loop and Beat Jump

Task - Observations/Comments:

1. Enable looping for the next 8 beats - users instantly completed the task
2. Disable looping - users instantly completed the task
3. Jump 16 beats backwards- users instantly completed the task

####Jog Strip

Task - Observations/Comments:

1. Play a loaded song at a specific location - the type of movement was clear to the users (similarity with touch interfaces) but there was confusion with the direction of motion (does the track waveform move in the same direction or the opposite?)
2. Jog through a song currently playing - same as above

####Equalizer and mixer

Task - Observations/Comments:

1. Kill the bass frequency on the left deck - equalizer knobs/buttons unmarked. Users either had to assume according to position (e.g. bottom is bass) or could not accomplish the task
2. Increase treble on right deck - same as above
3. Fade out the left side track and fade in the right side track - confusion between left/right volume sliders and crossfader slider; none of the sliders were marked

####Volume/Cue

Task - Observations/Comments:

1. Increase the volume of the right-hand side deck - users instantly completed the task
2. Cue what is playing on the left-hand side deck - users instantly completed the task
3. While cueing, mix cue output and music played on the speakers to the headphones - the functionality itself was ambiguous for users due to lack of DJing knowledge and inadequate/unintuitive control on the console

####Successful aspects of design

- Music library browser: overall successful; the users were able to locate and use it without any problems. Their verbal and written feedback were all positive.

- Looping and beat jump: interface was very straight-forward and easy to use. One user wasn’t sure how it worked at first, but once he used it he said it was very simple.

- Jogging Strip: The users enjoyed using this control. The only problem with it was the direction of the motion; swiping left means moving forward in the song whereas swiping right means moving backward. It can be implemented in the reverse direction though; this can be decided with more user testing. In general, the control, position and interface was successful.

- Cue buttons: The user found these buttons without hesitation; the picture of the headphones is key.

####Potential Design Revisions

- Effects: The users had trouble figuring out how loading an effect works. They thought that the “1,2,3” load buttons work the same way as the library “L,R” load buttons, i.e. you select the desired effect, and then press the number button to load it into the specified FX control. However, the number should be pressed first, and then the effect selected. This means that the select knob is always “attached” to one of the 3 controls. This was our mistake during the test; we should have made one of the 3 numbers green (meaning it is pressed) because one should be pressed at all times. Because you are supposed to select the number first and then use the knob to select the effect, the numbers should be placed above or to the left of the select knob. Also, they should not be labeled as “load” because the library “L,R” buttons are labeled as “load”, and this is confusing because they do not do the same thing.

- Jogging strip: As mentioned above, the users used the jogging strip in the reverse direction of what we meant it to be used. This means that it is more intuitive for right swipe to mean “forward” and left swipe to mean “backward”. However, we put right and left arrows as labels below the strip; this might have been the reason the users swiped in those directions, and removing the labels will make them swipe correctly. We will consider changing the direction of the swipe in our design.

- Equalizer and Filter: The users found these functions confusing. When one was asked to increase the treble, he used the filter knob instead. He said that they are too close together and he couldn’t tell which one was which. In order to keep these functions visually separated, we will change the implementation of the equalizer to 3 sliders, instead of 3 knob+button combinations. Also this way, 2 controls will be simplified into one. The users also suggested we label these better.

- Cross-Fader: One user did not know what this control does, nor did he use it at all during the test. When he was asked to fade into a song, he used the volume controls. Once we told him what the cross-fader does (after the test), he understood and said “if there were ‘L’ and ‘R’ labels on either side, I would have known exactly what it does”. Therefore we will add labels for this.

- Cueing: One of the users didn’t know how to use the cue mixer. He had no trouble turning the cue on/off, but mixing into his headphones was a challenge. We decided to isolate the whole cueing group from the volume and cross-fader controls, so that it’s visually its own section, and so that the user knows to go to that section when dealing with his/her headphones.

##Testing videos

[User Introduction](https://drive.google.com/file/d/0Bw9Q4cPnuQhhblhPellDNzZ3QjA/view?usp=sharing)
[DJ Briefing](https://drive.google.com/file/d/0Bw9Q4cPnuQhhaHFsM095eVgwNDg/view?usp=sharing)
[User Test](https://drive.google.com/file/d/0Bw9Q4cPnuQhhM2JVZF91aXJHSmc/view?usp=sharing)
[User Feedback](https://drive.google.com/file/d/0Bw9Q4cPnuQhhMzlIS1JQMzlONjQ/view?usp=sharing)