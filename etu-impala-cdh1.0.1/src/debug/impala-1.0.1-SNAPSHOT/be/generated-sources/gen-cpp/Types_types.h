/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Types_TYPES_H
#define Types_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace impala {

struct TPrimitiveType {
  enum type {
    INVALID_TYPE = 0,
    NULL_TYPE = 1,
    BOOLEAN = 2,
    TINYINT = 3,
    SMALLINT = 4,
    INT = 5,
    BIGINT = 6,
    FLOAT = 7,
    DOUBLE = 8,
    DATE = 9,
    DATETIME = 10,
    TIMESTAMP = 11,
    STRING = 12,
    BINARY = 13,
    DECIMAL = 14
  };
};

extern const std::map<int, const char*> _TPrimitiveType_VALUES_TO_NAMES;

struct TStmtType {
  enum type {
    QUERY = 0,
    DDL = 1,
    DML = 2,
    EXPLAIN = 3
  };
};

extern const std::map<int, const char*> _TStmtType_VALUES_TO_NAMES;

struct TExplainLevel {
  enum type {
    NORMAL = 0,
    VERBOSE = 1
  };
};

extern const std::map<int, const char*> _TExplainLevel_VALUES_TO_NAMES;

typedef int64_t TTimestamp;

typedef int32_t TPlanNodeId;

typedef int32_t TTupleId;

typedef int32_t TSlotId;

typedef int32_t TTableId;


class TNetworkAddress {
 public:

  static const char* ascii_fingerprint; // = "EEBC915CE44901401D881E6091423036";
  static const uint8_t binary_fingerprint[16]; // = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

  TNetworkAddress() : hostname(), port(0) {
  }

  virtual ~TNetworkAddress() throw() {}

  std::string hostname;
  int32_t port;

  void __set_hostname(const std::string& val) {
    hostname = val;
  }

  void __set_port(const int32_t val) {
    port = val;
  }

  bool operator == (const TNetworkAddress & rhs) const
  {
    if (!(hostname == rhs.hostname))
      return false;
    if (!(port == rhs.port))
      return false;
    return true;
  }
  bool operator != (const TNetworkAddress &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TNetworkAddress & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TNetworkAddress &a, TNetworkAddress &b);


class TUniqueId {
 public:

  static const char* ascii_fingerprint; // = "F33135321253DAEB67B0E79E416CA831";
  static const uint8_t binary_fingerprint[16]; // = {0xF3,0x31,0x35,0x32,0x12,0x53,0xDA,0xEB,0x67,0xB0,0xE7,0x9E,0x41,0x6C,0xA8,0x31};

  TUniqueId() : hi(0), lo(0) {
  }

  virtual ~TUniqueId() throw() {}

  int64_t hi;
  int64_t lo;

  void __set_hi(const int64_t val) {
    hi = val;
  }

  void __set_lo(const int64_t val) {
    lo = val;
  }

  bool operator == (const TUniqueId & rhs) const
  {
    if (!(hi == rhs.hi))
      return false;
    if (!(lo == rhs.lo))
      return false;
    return true;
  }
  bool operator != (const TUniqueId &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniqueId & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TUniqueId &a, TUniqueId &b);

} // namespace

#endif
