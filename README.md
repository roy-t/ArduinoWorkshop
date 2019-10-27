# ArduinoWorkshop
Exercises for an Arduino workshop I give at Bol.com.

## Set-up

### 0. Presentation
A short presentation on what we are going to do today, the history of programming, and the theory behind programming.

### 1. Blink
In this exercise we connect a led to our Arduino board and make it blink. We will use this example to explain the hardware, variables, statements, and methods, as well as the basic syntax. Once participants understand the basics they are asked to blink an S.O.S. pattern. Participants who are far ahead of the group can try to connect a second led.

### 2. Note
In this exercise we connect a speaker to our arduiono board to play a single note. We will briefly explain how notes work, to show that a programmer also needs some domain knowledge to do their work. No new programming concepts are explained. Once participants understand the example they are asked to produce different notes, or even a sequence of notes. Participants who are far ahead of the group can try to make the light effects with the led for every note.

### 3. Song
In this exercise we play an entire song, instead of a single note. We explain the concepts of arrays and for loops. No new hardware is added. Once participants understand the example they are asked to compose different songs. Participants who are far ahead of the group can try to vary the length of each note.

### 4. Pot
In this exercise we connect a potentiometer to our Arduino board. This is the first time we read, instead of write, from a pin. We use the potentiometer to vary the blinking frequency of the led light. After the participants understand the code we continue directly to the next exercise.

### 5. Pot_If
In this exercise we combine the led, speaker, and potentiometer from the previous exercise. We also introduce the if statement. In the example we use the potentiometer to turning either the speaker or the led on. After the participants understand the example they are asked to build a third setting on the potentiometer to turn everything off. 

### Overtime
Participants are asked to use all the knowledge they have now to think of a cool project to do. The participants should briefly discuss their idea with the instructor to see if its achievable in the time that's left.

## Workshop rationale

### 1. Goal
The workshop has the following goals
- To show everyone what programming is, so they understand better what their colleagues are doing
- To show that everyone can learn how to program
- To show that programming is fun. 

The workshop explicitly does not have the following goals:
- To learn the participants things they can use daily
- To convive the participans to become programmers.

For this reason I've decided to use an Arduino. The hardware and tools are simple and 'close to the metal'. And the combination of 'things that you can touch' and 'things that you type' is a very short positive feedback loop. An alternative would've been something like Python, but my fear was that people would then focus to much on how programming could help them daily. While most users of this workshop are expert Excel users, so it would take a long while to surpass that.

### 2. What's in it for the participants
At the end of the day they will have assembled parts on a breadbord, and will have written code to control these parts. They have probably made small errors, which they've had to debug. And they will have accomplished creating something themselves. The participants will also have learned that to be able to program something, you will also need to learn something about the domain you're working in. In this case, music. Doing all this they've experienced briefly what a programmer does.

### 3. How does the workshop look
We wil start with a short presentation to learn more about the history of programming, and the theory behind it. After that there are five small exercises. In each exercise we will introduce a new programming technique, or a new piece of hardware. Every exercises starts with some pre-written code. Once the participants understand it they code and have verified that the hardware is working there are several suggestions to modify the code. We will timebox these exercises, so some participants will get further than others. But that's OK. The last exercise combines everything you have learned. We then ask the users to come-up with their own goal for the last part of the workshop.

### 4. Target group
Colleagues who often work with programmers, but have never written code themselves. They are often fluent in Excel and might have written SQL queries. So they are used to the structured thinking programming requires.

### 5. Difficult situations
- Code: computers only do what you say, they don't understand it
- Hardware: sometimes it just doesn't work and that isn't your fault.

In both cases the participants are asked to go back to a situation that worked and to make the smallest steps possible to see where things start to go wrong. However, participants should ask for help if they get stuck for more than 5 minutes. This workshop is about learning why programming is fun, and not about learning debugging skills.

### 6. Setup
- Short presentation
- Practicum in groups of 2