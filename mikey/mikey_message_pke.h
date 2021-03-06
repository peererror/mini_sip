#ifndef MIKEY_MESSAGE_PKE_H
#define MIKEY_MESSAGE_PKE_H

#include "mikey_message.h"
#include "key_agreement_pke.h"

class Mikey_Message_PKE : public Mikey_Message
{
public:
    Mikey_Message_PKE();
    Mikey_Message_PKE(Key_Agreement_PKE* ka, int encrAlg = MIKEY_ENCR_AES_CM_128, int macAlg = MIKEY_MAC_HMAC_SHA1_160 );

    SRef<Mikey_Message *> parse_response(Key_Agreement  * kaBase );
    void set_offer(Key_Agreement * kaBase );
    SRef<Mikey_Message *> build_response(Key_Agreement * kaBase );
    bool authenticate( Key_Agreement  * ka );

    bool is_initiator_message() const;
    bool is_responder_message() const;
    int32_t key_agreement_type() const;
};

#endif // MIKEY_MESSAGE_PKE_H
