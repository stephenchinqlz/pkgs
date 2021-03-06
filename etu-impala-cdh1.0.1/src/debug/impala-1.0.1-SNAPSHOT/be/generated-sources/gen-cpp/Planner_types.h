/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Planner_TYPES_H
#define Planner_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "Types_types.h"
#include "Exprs_types.h"
#include "DataSinks_types.h"
#include "PlanNodes_types.h"
#include "Partitions_types.h"


namespace impala {

typedef struct _TPlanFragment__isset {
  _TPlanFragment__isset() : plan(false), output_exprs(false), output_sink(false) {}
  bool plan;
  bool output_exprs;
  bool output_sink;
} _TPlanFragment__isset;

class TPlanFragment {
 public:

  static const char* ascii_fingerprint; // = "0A0380E7878875347C111E8EC9113A54";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x03,0x80,0xE7,0x87,0x88,0x75,0x34,0x7C,0x11,0x1E,0x8E,0xC9,0x11,0x3A,0x54};

  TPlanFragment() {
  }

  virtual ~TPlanFragment() throw() {}

   ::impala::TPlan plan;
  std::vector< ::impala::TExpr>  output_exprs;
   ::impala::TDataSink output_sink;
   ::impala::TDataPartition partition;

  _TPlanFragment__isset __isset;

  void __set_plan(const  ::impala::TPlan& val) {
    plan = val;
    __isset.plan = true;
  }

  void __set_output_exprs(const std::vector< ::impala::TExpr> & val) {
    output_exprs = val;
    __isset.output_exprs = true;
  }

  void __set_output_sink(const  ::impala::TDataSink& val) {
    output_sink = val;
    __isset.output_sink = true;
  }

  void __set_partition(const  ::impala::TDataPartition& val) {
    partition = val;
  }

  bool operator == (const TPlanFragment & rhs) const
  {
    if (__isset.plan != rhs.__isset.plan)
      return false;
    else if (__isset.plan && !(plan == rhs.plan))
      return false;
    if (__isset.output_exprs != rhs.__isset.output_exprs)
      return false;
    else if (__isset.output_exprs && !(output_exprs == rhs.output_exprs))
      return false;
    if (__isset.output_sink != rhs.__isset.output_sink)
      return false;
    else if (__isset.output_sink && !(output_sink == rhs.output_sink))
      return false;
    if (!(partition == rhs.partition))
      return false;
    return true;
  }
  bool operator != (const TPlanFragment &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TPlanFragment & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TPlanFragment &a, TPlanFragment &b);

typedef struct _TScanRangeLocation__isset {
  _TScanRangeLocation__isset() : volume_id(true) {}
  bool volume_id;
} _TScanRangeLocation__isset;

class TScanRangeLocation {
 public:

  static const char* ascii_fingerprint; // = "F781DE6750BF202CC680B9A8B0807AFD";
  static const uint8_t binary_fingerprint[16]; // = {0xF7,0x81,0xDE,0x67,0x50,0xBF,0x20,0x2C,0xC6,0x80,0xB9,0xA8,0xB0,0x80,0x7A,0xFD};

  TScanRangeLocation() : volume_id(-1) {
  }

  virtual ~TScanRangeLocation() throw() {}

   ::impala::TNetworkAddress server;
  int32_t volume_id;

  _TScanRangeLocation__isset __isset;

  void __set_server(const  ::impala::TNetworkAddress& val) {
    server = val;
  }

  void __set_volume_id(const int32_t val) {
    volume_id = val;
    __isset.volume_id = true;
  }

  bool operator == (const TScanRangeLocation & rhs) const
  {
    if (!(server == rhs.server))
      return false;
    if (__isset.volume_id != rhs.__isset.volume_id)
      return false;
    else if (__isset.volume_id && !(volume_id == rhs.volume_id))
      return false;
    return true;
  }
  bool operator != (const TScanRangeLocation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TScanRangeLocation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TScanRangeLocation &a, TScanRangeLocation &b);

typedef struct _TScanRangeLocations__isset {
  _TScanRangeLocations__isset() : locations(false) {}
  bool locations;
} _TScanRangeLocations__isset;

class TScanRangeLocations {
 public:

  static const char* ascii_fingerprint; // = "2744B175F9645C4910FE43B1D59FDF9C";
  static const uint8_t binary_fingerprint[16]; // = {0x27,0x44,0xB1,0x75,0xF9,0x64,0x5C,0x49,0x10,0xFE,0x43,0xB1,0xD5,0x9F,0xDF,0x9C};

  TScanRangeLocations() {
  }

  virtual ~TScanRangeLocations() throw() {}

   ::impala::TScanRange scan_range;
  std::vector<TScanRangeLocation>  locations;

  _TScanRangeLocations__isset __isset;

  void __set_scan_range(const  ::impala::TScanRange& val) {
    scan_range = val;
  }

  void __set_locations(const std::vector<TScanRangeLocation> & val) {
    locations = val;
    __isset.locations = true;
  }

  bool operator == (const TScanRangeLocations & rhs) const
  {
    if (!(scan_range == rhs.scan_range))
      return false;
    if (!(locations == rhs.locations))
      return false;
    return true;
  }
  bool operator != (const TScanRangeLocations &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TScanRangeLocations & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TScanRangeLocations &a, TScanRangeLocations &b);

} // namespace

#endif
