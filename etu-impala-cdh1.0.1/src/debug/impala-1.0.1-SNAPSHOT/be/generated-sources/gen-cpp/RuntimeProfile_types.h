/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef RuntimeProfile_TYPES_H
#define RuntimeProfile_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace impala {

struct TCounterType {
  enum type {
    UNIT = 0,
    UNIT_PER_SECOND = 1,
    CPU_TICKS = 2,
    BYTES = 3,
    BYTES_PER_SECOND = 4,
    TIME_NS = 5,
    DOUBLE_VALUE = 6
  };
};

extern const std::map<int, const char*> _TCounterType_VALUES_TO_NAMES;


class TCounter {
 public:

  static const char* ascii_fingerprint; // = "8AD8F7908FF0D5FB40F4F4BAEA3D0B0A";
  static const uint8_t binary_fingerprint[16]; // = {0x8A,0xD8,0xF7,0x90,0x8F,0xF0,0xD5,0xFB,0x40,0xF4,0xF4,0xBA,0xEA,0x3D,0x0B,0x0A};

  TCounter() : name(), type((TCounterType::type)0), value(0) {
  }

  virtual ~TCounter() throw() {}

  std::string name;
  TCounterType::type type;
  int64_t value;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_type(const TCounterType::type val) {
    type = val;
  }

  void __set_value(const int64_t val) {
    value = val;
  }

  bool operator == (const TCounter & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const TCounter &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TCounter & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TCounter &a, TCounter &b);


class TEventSequence {
 public:

  static const char* ascii_fingerprint; // = "D1A02872D0E8B7968A18753F2DB91154";
  static const uint8_t binary_fingerprint[16]; // = {0xD1,0xA0,0x28,0x72,0xD0,0xE8,0xB7,0x96,0x8A,0x18,0x75,0x3F,0x2D,0xB9,0x11,0x54};

  TEventSequence() : name() {
  }

  virtual ~TEventSequence() throw() {}

  std::string name;
  std::vector<int64_t>  timestamps;
  std::vector<std::string>  labels;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_timestamps(const std::vector<int64_t> & val) {
    timestamps = val;
  }

  void __set_labels(const std::vector<std::string> & val) {
    labels = val;
  }

  bool operator == (const TEventSequence & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(timestamps == rhs.timestamps))
      return false;
    if (!(labels == rhs.labels))
      return false;
    return true;
  }
  bool operator != (const TEventSequence &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TEventSequence & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TEventSequence &a, TEventSequence &b);

typedef struct _TRuntimeProfileNode__isset {
  _TRuntimeProfileNode__isset() : event_sequences(false) {}
  bool event_sequences;
} _TRuntimeProfileNode__isset;

class TRuntimeProfileNode {
 public:

  static const char* ascii_fingerprint; // = "4015F22745A532A9A586A67370B0996A";
  static const uint8_t binary_fingerprint[16]; // = {0x40,0x15,0xF2,0x27,0x45,0xA5,0x32,0xA9,0xA5,0x86,0xA6,0x73,0x70,0xB0,0x99,0x6A};

  TRuntimeProfileNode() : name(), num_children(0), metadata(0), indent(0) {
  }

  virtual ~TRuntimeProfileNode() throw() {}

  std::string name;
  int32_t num_children;
  std::vector<TCounter>  counters;
  int64_t metadata;
  bool indent;
  std::map<std::string, std::string>  info_strings;
  std::vector<std::string>  info_strings_display_order;
  std::map<std::string, std::set<std::string> >  child_counters_map;
  std::vector<TEventSequence>  event_sequences;

  _TRuntimeProfileNode__isset __isset;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_num_children(const int32_t val) {
    num_children = val;
  }

  void __set_counters(const std::vector<TCounter> & val) {
    counters = val;
  }

  void __set_metadata(const int64_t val) {
    metadata = val;
  }

  void __set_indent(const bool val) {
    indent = val;
  }

  void __set_info_strings(const std::map<std::string, std::string> & val) {
    info_strings = val;
  }

  void __set_info_strings_display_order(const std::vector<std::string> & val) {
    info_strings_display_order = val;
  }

  void __set_child_counters_map(const std::map<std::string, std::set<std::string> > & val) {
    child_counters_map = val;
  }

  void __set_event_sequences(const std::vector<TEventSequence> & val) {
    event_sequences = val;
    __isset.event_sequences = true;
  }

  bool operator == (const TRuntimeProfileNode & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(num_children == rhs.num_children))
      return false;
    if (!(counters == rhs.counters))
      return false;
    if (!(metadata == rhs.metadata))
      return false;
    if (!(indent == rhs.indent))
      return false;
    if (!(info_strings == rhs.info_strings))
      return false;
    if (!(info_strings_display_order == rhs.info_strings_display_order))
      return false;
    if (!(child_counters_map == rhs.child_counters_map))
      return false;
    if (__isset.event_sequences != rhs.__isset.event_sequences)
      return false;
    else if (__isset.event_sequences && !(event_sequences == rhs.event_sequences))
      return false;
    return true;
  }
  bool operator != (const TRuntimeProfileNode &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TRuntimeProfileNode & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TRuntimeProfileNode &a, TRuntimeProfileNode &b);


class TRuntimeProfileTree {
 public:

  static const char* ascii_fingerprint; // = "46D360250C2023560AA0631F5261DA3C";
  static const uint8_t binary_fingerprint[16]; // = {0x46,0xD3,0x60,0x25,0x0C,0x20,0x23,0x56,0x0A,0xA0,0x63,0x1F,0x52,0x61,0xDA,0x3C};

  TRuntimeProfileTree() {
  }

  virtual ~TRuntimeProfileTree() throw() {}

  std::vector<TRuntimeProfileNode>  nodes;

  void __set_nodes(const std::vector<TRuntimeProfileNode> & val) {
    nodes = val;
  }

  bool operator == (const TRuntimeProfileTree & rhs) const
  {
    if (!(nodes == rhs.nodes))
      return false;
    return true;
  }
  bool operator != (const TRuntimeProfileTree &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TRuntimeProfileTree & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TRuntimeProfileTree &a, TRuntimeProfileTree &b);

} // namespace

#endif
