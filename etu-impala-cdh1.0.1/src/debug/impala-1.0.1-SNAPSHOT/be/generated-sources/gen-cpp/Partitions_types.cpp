/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Partitions_types.h"

#include <algorithm>

namespace impala {

int _kTPartitionTypeValues[] = {
  TPartitionType::UNPARTITIONED,
  TPartitionType::RANDOM,
  TPartitionType::HASH_PARTITIONED,
  TPartitionType::RANGE_PARTITIONED
};
const char* _kTPartitionTypeNames[] = {
  "UNPARTITIONED",
  "RANDOM",
  "HASH_PARTITIONED",
  "RANGE_PARTITIONED"
};
const std::map<int, const char*> _TPartitionType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kTPartitionTypeValues, _kTPartitionTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* TDataPartition::ascii_fingerprint = "5642DCAB513C52DF94428360505F8E39";
const uint8_t TDataPartition::binary_fingerprint[16] = {0x56,0x42,0xDC,0xAB,0x51,0x3C,0x52,0xDF,0x94,0x42,0x83,0x60,0x50,0x5F,0x8E,0x39};

uint32_t TDataPartition::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_type = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type = (TPartitionType::type)ecast0;
          isset_type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->partition_exprs.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->partition_exprs.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += this->partition_exprs[_i5].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.partition_exprs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_type)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TDataPartition::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TDataPartition");

  ++fcnt;
  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.partition_exprs) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("partition_exprs", ::apache::thrift::protocol::T_LIST, 2);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->partition_exprs.size()));
      std::vector< ::impala::TExpr> ::const_iterator _iter6;
      for (_iter6 = this->partition_exprs.begin(); _iter6 != this->partition_exprs.end(); ++_iter6)
      {
        xfer += (*_iter6).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TDataPartition &a, TDataPartition &b) {
  using ::std::swap;
  swap(a.type, b.type);
  swap(a.partition_exprs, b.partition_exprs);
  swap(a.__isset, b.__isset);
}

} // namespace
