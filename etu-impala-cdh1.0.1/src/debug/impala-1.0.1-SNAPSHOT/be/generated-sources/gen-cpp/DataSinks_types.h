/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef DataSinks_TYPES_H
#define DataSinks_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "Exprs_types.h"
#include "Types_types.h"
#include "Descriptors_types.h"
#include "Partitions_types.h"


namespace impala {

struct TDataSinkType {
  enum type {
    DATA_STREAM_SINK = 0,
    TABLE_SINK = 1
  };
};

extern const std::map<int, const char*> _TDataSinkType_VALUES_TO_NAMES;

struct TTableSinkType {
  enum type {
    HDFS = 0,
    HBASE = 1
  };
};

extern const std::map<int, const char*> _TTableSinkType_VALUES_TO_NAMES;


class TDataStreamSink {
 public:

  static const char* ascii_fingerprint; // = "24B01F8D09D53A103AB9B54EF8FACBCA";
  static const uint8_t binary_fingerprint[16]; // = {0x24,0xB0,0x1F,0x8D,0x09,0xD5,0x3A,0x10,0x3A,0xB9,0xB5,0x4E,0xF8,0xFA,0xCB,0xCA};

  TDataStreamSink() : dest_node_id(0) {
  }

  virtual ~TDataStreamSink() throw() {}

   ::impala::TPlanNodeId dest_node_id;
   ::impala::TDataPartition output_partition;

  void __set_dest_node_id(const  ::impala::TPlanNodeId val) {
    dest_node_id = val;
  }

  void __set_output_partition(const  ::impala::TDataPartition& val) {
    output_partition = val;
  }

  bool operator == (const TDataStreamSink & rhs) const
  {
    if (!(dest_node_id == rhs.dest_node_id))
      return false;
    if (!(output_partition == rhs.output_partition))
      return false;
    return true;
  }
  bool operator != (const TDataStreamSink &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TDataStreamSink & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TDataStreamSink &a, TDataStreamSink &b);


class THdfsTableSink {
 public:

  static const char* ascii_fingerprint; // = "3C95F3890FF8DE89139D0752B20A527D";
  static const uint8_t binary_fingerprint[16]; // = {0x3C,0x95,0xF3,0x89,0x0F,0xF8,0xDE,0x89,0x13,0x9D,0x07,0x52,0xB2,0x0A,0x52,0x7D};

  THdfsTableSink() : overwrite(0) {
  }

  virtual ~THdfsTableSink() throw() {}

  std::vector< ::impala::TExpr>  partition_key_exprs;
  bool overwrite;

  void __set_partition_key_exprs(const std::vector< ::impala::TExpr> & val) {
    partition_key_exprs = val;
  }

  void __set_overwrite(const bool val) {
    overwrite = val;
  }

  bool operator == (const THdfsTableSink & rhs) const
  {
    if (!(partition_key_exprs == rhs.partition_key_exprs))
      return false;
    if (!(overwrite == rhs.overwrite))
      return false;
    return true;
  }
  bool operator != (const THdfsTableSink &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const THdfsTableSink & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(THdfsTableSink &a, THdfsTableSink &b);

typedef struct _TTableSink__isset {
  _TTableSink__isset() : hdfs_table_sink(false) {}
  bool hdfs_table_sink;
} _TTableSink__isset;

class TTableSink {
 public:

  static const char* ascii_fingerprint; // = "A54E12003FE46272907559DA39173DF6";
  static const uint8_t binary_fingerprint[16]; // = {0xA5,0x4E,0x12,0x00,0x3F,0xE4,0x62,0x72,0x90,0x75,0x59,0xDA,0x39,0x17,0x3D,0xF6};

  TTableSink() : target_table_id(0), type((TTableSinkType::type)0) {
  }

  virtual ~TTableSink() throw() {}

   ::impala::TTableId target_table_id;
  TTableSinkType::type type;
  THdfsTableSink hdfs_table_sink;

  _TTableSink__isset __isset;

  void __set_target_table_id(const  ::impala::TTableId val) {
    target_table_id = val;
  }

  void __set_type(const TTableSinkType::type val) {
    type = val;
  }

  void __set_hdfs_table_sink(const THdfsTableSink& val) {
    hdfs_table_sink = val;
    __isset.hdfs_table_sink = true;
  }

  bool operator == (const TTableSink & rhs) const
  {
    if (!(target_table_id == rhs.target_table_id))
      return false;
    if (!(type == rhs.type))
      return false;
    if (__isset.hdfs_table_sink != rhs.__isset.hdfs_table_sink)
      return false;
    else if (__isset.hdfs_table_sink && !(hdfs_table_sink == rhs.hdfs_table_sink))
      return false;
    return true;
  }
  bool operator != (const TTableSink &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TTableSink & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TTableSink &a, TTableSink &b);

typedef struct _TDataSink__isset {
  _TDataSink__isset() : stream_sink(false), table_sink(false) {}
  bool stream_sink;
  bool table_sink;
} _TDataSink__isset;

class TDataSink {
 public:

  static const char* ascii_fingerprint; // = "328B992767024E7D83E9B93D3D5FBF28";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0x8B,0x99,0x27,0x67,0x02,0x4E,0x7D,0x83,0xE9,0xB9,0x3D,0x3D,0x5F,0xBF,0x28};

  TDataSink() : type((TDataSinkType::type)0) {
  }

  virtual ~TDataSink() throw() {}

  TDataSinkType::type type;
  TDataStreamSink stream_sink;
  TTableSink table_sink;

  _TDataSink__isset __isset;

  void __set_type(const TDataSinkType::type val) {
    type = val;
  }

  void __set_stream_sink(const TDataStreamSink& val) {
    stream_sink = val;
    __isset.stream_sink = true;
  }

  void __set_table_sink(const TTableSink& val) {
    table_sink = val;
    __isset.table_sink = true;
  }

  bool operator == (const TDataSink & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (__isset.stream_sink != rhs.__isset.stream_sink)
      return false;
    else if (__isset.stream_sink && !(stream_sink == rhs.stream_sink))
      return false;
    if (__isset.table_sink != rhs.__isset.table_sink)
      return false;
    else if (__isset.table_sink && !(table_sink == rhs.table_sink))
      return false;
    return true;
  }
  bool operator != (const TDataSink &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TDataSink & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TDataSink &a, TDataSink &b);

} // namespace

#endif
