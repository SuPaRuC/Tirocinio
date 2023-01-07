//
// Generated file, do not edit! Created by opp_msgtool 6.0 from app/messages/ComputationTimerMessage.msg.
//

#ifndef __TIROCINIO_COMPUTATIONTIMERMESSAGE_M_H
#define __TIROCINIO_COMPUTATIONTIMERMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif


namespace tirocinio {

class ComputationTimerMessage;

}  // namespace tirocinio

#include "veins/base/utils/Coord_m.h" // import veins.base.utils.Coord

#include "veins/modules/messages/BaseFrame1609_4_m.h" // import veins.modules.messages.BaseFrame1609_4

#include "veins/base/utils/SimpleAddress_m.h" // import veins.base.utils.SimpleAddress


namespace tirocinio {

/**
 * Class generated from <tt>app/messages/ComputationTimerMessage.msg:22</tt> by opp_msgtool.
 * <pre>
 * packet ComputationTimerMessage extends veins::BaseFrame1609_4
 * {
 *     simtime_t simulationTime;
 *     int indexHost;
 *     double loadHost;
 * }
 * </pre>
 */
class ComputationTimerMessage : public ::veins::BaseFrame1609_4
{
  protected:
    ::omnetpp::simtime_t simulationTime = SIMTIME_ZERO;
    int indexHost = 0;
    double loadHost = 0;

  private:
    void copy(const ComputationTimerMessage& other);

  protected:
    bool operator==(const ComputationTimerMessage&) = delete;

  public:
    ComputationTimerMessage(const char *name=nullptr, short kind=0);
    ComputationTimerMessage(const ComputationTimerMessage& other);
    virtual ~ComputationTimerMessage();
    ComputationTimerMessage& operator=(const ComputationTimerMessage& other);
    virtual ComputationTimerMessage *dup() const override {return new ComputationTimerMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual ::omnetpp::simtime_t getSimulationTime() const;
    virtual void setSimulationTime(::omnetpp::simtime_t simulationTime);

    virtual int getIndexHost() const;
    virtual void setIndexHost(int indexHost);

    virtual double getLoadHost() const;
    virtual void setLoadHost(double loadHost);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ComputationTimerMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ComputationTimerMessage& obj) {obj.parsimUnpack(b);}


}  // namespace tirocinio


namespace omnetpp {

template<> inline tirocinio::ComputationTimerMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<tirocinio::ComputationTimerMessage*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __TIROCINIO_COMPUTATIONTIMERMESSAGE_M_H
