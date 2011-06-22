//
// Generated file, do not edit! Created by opp_msgc 4.0 from packet/SPacket.msg.
//

#ifndef _SPACKET_M_H_
#define _SPACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>packet/SPacket.msg</tt> by opp_msgc.
 * <pre>
 * message sPacket extends cPacket
 * {
 *     double tags[256];
 *     bool forward;
 * }
 * </pre>
 */
class sPacket : public cPacket
{
  protected:
    double tags_var[256];
    bool forward_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const sPacket&);

  public:
    sPacket(const char *name=NULL, int kind=0);
    sPacket(const sPacket& other);
    virtual ~sPacket();
    sPacket& operator=(const sPacket& other);
    virtual sPacket *dup() const {return new sPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getTagsArraySize() const;
    virtual double getTags(unsigned int k) const;
    virtual void setTags(unsigned int k, double tags_var);
    virtual bool getForward() const;
    virtual void setForward(bool forward_var);
};

inline void doPacking(cCommBuffer *b, sPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, sPacket& obj) {obj.parsimUnpack(b);}


#endif // _SPACKET_M_H_