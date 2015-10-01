# resonant-canvas
by Dan Sakamoto and Susan Zuo

This project sets up a situation where two participants explore a pre-recorded dialogue through the act of drawing. Each participant will complete one side of the dialogue through drawing with a graphite crayon and how far each person is in the pre-recorded audio is controlled by his or her drawing on the paper. With a clip from The Certified Copy as the audio track, we are interested to see how two participants can inject their creative input into an already engaging and open-ended conversation and eventually complete a dialogue between themselves. We also hope to explore the uncommon side of a conversation in which the content is preset but the time scale is controlled by the participants. This piece senses the graphite laid by the pencils and plays the soundtrack corresponded to each participant based on the amount of graphite. The sensing of the graphite is completed by two RC circuit connected to two arduino. The arduino then smooths out the analog input with a smoothing algorithm and transfers the data stream to the computer through the serial port. After receiving the data, the computer outputs the audio that is mapped to the input.
