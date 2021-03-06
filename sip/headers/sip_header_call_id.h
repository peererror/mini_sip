#ifndef SIP_HEADER_CALL_ID_H
#define SIP_HEADER_CALL_ID_H

#include "sip_header_string.h"

extern Sip_Header_Factory_Func_Ptr sip_header_call_id_factory;

class Sip_Header_Value_Call_ID : public Sip_Header_Value_String
{
public:
    Sip_Header_Value_Call_ID(const std::string &build_from);

    virtual std::string get_mem_object_type() const { return "SipHeaderCallID"; }
};

#endif // SIP_HEADER_CALL_ID_H
