/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class quickfix_Session */

#ifndef _Included_quickfix_Session
#define _Included_quickfix_Session
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     quickfix_Session
 * Method:    sendToTarget
 * Signature: (Lquickfix/Message;)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2
  (JNIEnv *, jclass, jobject);

/*
 * Class:     quickfix_Session
 * Method:    sendToTarget
 * Signature: (Lquickfix/Message;Lquickfix/SessionID;)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2Lquickfix_SessionID_2
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     quickfix_Session
 * Method:    sendToTarget
 * Signature: (Lquickfix/Message;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_quickfix_Session_sendToTarget__Lquickfix_Message_2Ljava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jobject, jstring, jstring);

/*
 * Class:     quickfix_Session
 * Method:    lookupSession
 * Signature: (Lquickfix/SessionID;)Lquickfix/Session;
 */
JNIEXPORT jobject JNICALL Java_quickfix_Session_lookupSession
  (JNIEnv *, jclass, jobject);

/*
 * Class:     quickfix_Session
 * Method:    reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_quickfix_Session_reset
  (JNIEnv *, jobject);

/*
 * Class:     quickfix_Session
 * Method:    setNextSenderMsgSeqNum
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_quickfix_Session_setNextSenderMsgSeqNum
  (JNIEnv *, jobject, jint);

/*
 * Class:     quickfix_Session
 * Method:    setNextTargetMsgSeqNum
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_quickfix_Session_setNextTargetMsgSeqNum
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
