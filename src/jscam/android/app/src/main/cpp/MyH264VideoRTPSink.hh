#include "H264VideoRTPSink.hh"
#include "MediaSession.hh"
#include "MediaSink.hh"

class MyH264VideoRTPSink: public H264VideoRTPSink {
    /*
    public:
        static MyH264VideoRTPSink* createNew(UsageEnvironment& env,
                        MediaSubsession& subsession, // identifies the kind of data that's being received
                        char const* streamId = NULL); // identifies the stream itself (optional)
    */
    public:
        //MyH264VideoRTPSink(UsageEnvironment& env, MediaSubsession& subsession, char const* streamId);
            // called only by "createNew()"
        //virtual ~MyH264VideoRTPSink();

        static void afterGettingFrame(void* clientData, unsigned frameSize,
                                      unsigned numTruncatedBytes,
                                      struct timeval presentationTime,
                                      unsigned durationInMicroseconds);
        void afterGettingFrame(unsigned frameSize, unsigned numTruncatedBytes,
                    struct timeval presentationTime, unsigned durationInMicroseconds);

        // redefined virtual functions:
        virtual Boolean continuePlaying();

        u_int8_t* fReceiveBuffer;
        MediaSubsession& fSubsession;
        char* fStreamId;
};