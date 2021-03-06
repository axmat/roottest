//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Trk__TrackSegment_p1_h
#define Trk__TrackSegment_p1_h
namespace Trk {
class TrackSegment_p1;
} // end of namespace.

#include "TPObjRef.h"

namespace Trk {
class TrackSegment_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   TPObjRef    m_segment;    //
   TPObjRef    m_associatedSurface;    //

   TrackSegment_p1();
   TrackSegment_p1(const TrackSegment_p1 & );
   virtual ~TrackSegment_p1();

};
} // namespace
#endif
