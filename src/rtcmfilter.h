/*
 * rtcmfilter.h
 *
 *  Created on: 21 Aug 2019
 *      Author: simon
 */

#ifndef SRC_RTCMFILTER_H_
#define SRC_RTCMFILTER_H_

#ifndef TRUE
#define TRUE -1
#define FALSE 0
#endif

typedef struct buffer {
	unsigned char * content;	// Space for a list of RTCM messages and/or fragments.
	size_t length;				// length of the malloc'ed content buffer.
} Buffer;

extern int displayingBuffers();
extern int displayingRtcmMessages();
extern int displayingOtherMessages();
extern Buffer * createBuffer(size_t length);
extern void freeBuffer(Buffer * buffer);
extern unsigned int getRtcmLength(unsigned char * messageBuffer, unsigned int bufferLength);
extern unsigned int getFWNN(unsigned char * messageBuffer, unsigned int bufferLength);
extern Buffer * createBuffer(size_t length);
extern void freeBuffer(Buffer * buffer);
extern void displayBuffer(Buffer * buffer, int state);
extern void displayMessage(unsigned char * buffer, unsigned int bufferLength);
extern Buffer * addMessageFragmentToBuffer(Buffer * buffer, unsigned char * fragment, size_t fragmentLength);
extern Buffer * getRtcmMessages(Buffer inputBuffer);
extern unsigned int getbitu(const unsigned char *buff, int pos, int len);

#endif /* SRC_RTCMFILTER_H_ */