/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Descriptors_types.h"

#include <algorithm>

namespace impala {

int _kTTableTypeValues[] = {
  TTableType::HDFS_TABLE,
  TTableType::HBASE_TABLE
};
const char* _kTTableTypeNames[] = {
  "HDFS_TABLE",
  "HBASE_TABLE"
};
const std::map<int, const char*> _TTableType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kTTableTypeValues, _kTTableTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kTHdfsFileFormatValues[] = {
  THdfsFileFormat::TEXT,
  THdfsFileFormat::LZO_TEXT,
  THdfsFileFormat::RC_FILE,
  THdfsFileFormat::SEQUENCE_FILE,
  THdfsFileFormat::AVRO,
  THdfsFileFormat::PARQUET
};
const char* _kTHdfsFileFormatNames[] = {
  "TEXT",
  "LZO_TEXT",
  "RC_FILE",
  "SEQUENCE_FILE",
  "AVRO",
  "PARQUET"
};
const std::map<int, const char*> _THdfsFileFormat_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kTHdfsFileFormatValues, _kTHdfsFileFormatNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kTHdfsCompressionValues[] = {
  THdfsCompression::NONE,
  THdfsCompression::DEFAULT,
  THdfsCompression::GZIP,
  THdfsCompression::DEFLATE,
  THdfsCompression::BZIP2,
  THdfsCompression::SNAPPY,
  THdfsCompression::SNAPPY_BLOCKED,
  THdfsCompression::LZO
};
const char* _kTHdfsCompressionNames[] = {
  "NONE",
  "DEFAULT",
  "GZIP",
  "DEFLATE",
  "BZIP2",
  "SNAPPY",
  "SNAPPY_BLOCKED",
  "LZO"
};
const std::map<int, const char*> _THdfsCompression_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kTHdfsCompressionValues, _kTHdfsCompressionNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* TSlotDescriptor::ascii_fingerprint = "EB3FE8AE124263B4B82968C0919DC0FA";
const uint8_t TSlotDescriptor::binary_fingerprint[16] = {0xEB,0x3F,0xE8,0xAE,0x12,0x42,0x63,0xB4,0xB8,0x29,0x68,0xC0,0x91,0x9D,0xC0,0xFA};

uint32_t TSlotDescriptor::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id = false;
  bool isset_parent = false;
  bool isset_slotType = false;
  bool isset_columnPos = false;
  bool isset_byteOffset = false;
  bool isset_nullIndicatorByte = false;
  bool isset_nullIndicatorBit = false;
  bool isset_slotIdx = false;
  bool isset_isMaterialized = false;

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
          xfer += iprot->readI32(this->id);
          isset_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->parent);
          isset_parent = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->slotType = ( ::impala::TPrimitiveType::type)ecast0;
          isset_slotType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->columnPos);
          isset_columnPos = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->byteOffset);
          isset_byteOffset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->nullIndicatorByte);
          isset_nullIndicatorByte = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->nullIndicatorBit);
          isset_nullIndicatorBit = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->slotIdx);
          isset_slotIdx = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isMaterialized);
          isset_isMaterialized = true;
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

  if (!isset_id)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_parent)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_slotType)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_columnPos)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_byteOffset)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_nullIndicatorByte)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_nullIndicatorBit)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_slotIdx)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_isMaterialized)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TSlotDescriptor::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TSlotDescriptor");

  ++fcnt;
  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("parent", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->parent);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("slotType", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->slotType);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("columnPos", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->columnPos);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("byteOffset", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->byteOffset);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("nullIndicatorByte", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->nullIndicatorByte);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("nullIndicatorBit", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->nullIndicatorBit);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("slotIdx", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->slotIdx);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("isMaterialized", ::apache::thrift::protocol::T_BOOL, 10);
  xfer += oprot->writeBool(this->isMaterialized);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TSlotDescriptor &a, TSlotDescriptor &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.parent, b.parent);
  swap(a.slotType, b.slotType);
  swap(a.columnPos, b.columnPos);
  swap(a.byteOffset, b.byteOffset);
  swap(a.nullIndicatorByte, b.nullIndicatorByte);
  swap(a.nullIndicatorBit, b.nullIndicatorBit);
  swap(a.slotIdx, b.slotIdx);
  swap(a.isMaterialized, b.isMaterialized);
}

const char* THdfsPartition::ascii_fingerprint = "C5B4E3F9EB060082EAAB73BF13CA4CD6";
const uint8_t THdfsPartition::binary_fingerprint[16] = {0xC5,0xB4,0xE3,0xF9,0xEB,0x06,0x00,0x82,0xEA,0xAB,0x73,0xBF,0x13,0xCA,0x4C,0xD6};

uint32_t THdfsPartition::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_lineDelim = false;
  bool isset_fieldDelim = false;
  bool isset_collectionDelim = false;
  bool isset_mapKeyDelim = false;
  bool isset_escapeChar = false;
  bool isset_fileFormat = false;
  bool isset_blockSize = false;
  bool isset_compression = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->lineDelim);
          isset_lineDelim = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->fieldDelim);
          isset_fieldDelim = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->collectionDelim);
          isset_collectionDelim = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->mapKeyDelim);
          isset_mapKeyDelim = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BYTE) {
          xfer += iprot->readByte(this->escapeChar);
          isset_escapeChar = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->fileFormat = (THdfsFileFormat::type)ecast1;
          isset_fileFormat = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->partitionKeyExprs.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->partitionKeyExprs.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += this->partitionKeyExprs[_i6].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.partitionKeyExprs = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->blockSize);
          isset_blockSize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast7;
          xfer += iprot->readI32(ecast7);
          this->compression = (THdfsCompression::type)ecast7;
          isset_compression = true;
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

  if (!isset_lineDelim)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_fieldDelim)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_collectionDelim)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_mapKeyDelim)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_escapeChar)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_fileFormat)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_blockSize)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_compression)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t THdfsPartition::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("THdfsPartition");

  ++fcnt;
  xfer += oprot->writeFieldBegin("lineDelim", ::apache::thrift::protocol::T_BYTE, 1);
  xfer += oprot->writeByte(this->lineDelim);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("fieldDelim", ::apache::thrift::protocol::T_BYTE, 2);
  xfer += oprot->writeByte(this->fieldDelim);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("collectionDelim", ::apache::thrift::protocol::T_BYTE, 3);
  xfer += oprot->writeByte(this->collectionDelim);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("mapKeyDelim", ::apache::thrift::protocol::T_BYTE, 4);
  xfer += oprot->writeByte(this->mapKeyDelim);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("escapeChar", ::apache::thrift::protocol::T_BYTE, 5);
  xfer += oprot->writeByte(this->escapeChar);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("fileFormat", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32((int32_t)this->fileFormat);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("partitionKeyExprs", ::apache::thrift::protocol::T_LIST, 7);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->partitionKeyExprs.size()));
    std::vector< ::impala::TExpr> ::const_iterator _iter8;
    for (_iter8 = this->partitionKeyExprs.begin(); _iter8 != this->partitionKeyExprs.end(); ++_iter8)
    {
      xfer += (*_iter8).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("blockSize", ::apache::thrift::protocol::T_I32, 8);
  xfer += oprot->writeI32(this->blockSize);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("compression", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32((int32_t)this->compression);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(THdfsPartition &a, THdfsPartition &b) {
  using ::std::swap;
  swap(a.lineDelim, b.lineDelim);
  swap(a.fieldDelim, b.fieldDelim);
  swap(a.collectionDelim, b.collectionDelim);
  swap(a.mapKeyDelim, b.mapKeyDelim);
  swap(a.escapeChar, b.escapeChar);
  swap(a.fileFormat, b.fileFormat);
  swap(a.partitionKeyExprs, b.partitionKeyExprs);
  swap(a.blockSize, b.blockSize);
  swap(a.compression, b.compression);
  swap(a.__isset, b.__isset);
}

const char* THdfsTable::ascii_fingerprint = "22C74049279DAED9A73D805FEB36B6C3";
const uint8_t THdfsTable::binary_fingerprint[16] = {0x22,0xC7,0x40,0x49,0x27,0x9D,0xAE,0xD9,0xA7,0x3D,0x80,0x5F,0xEB,0x36,0xB6,0xC3};

uint32_t THdfsTable::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_hdfsBaseDir = false;
  bool isset_colNames = false;
  bool isset_nullPartitionKeyValue = false;
  bool isset_nullColumnValue = false;
  bool isset_partitions = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->hdfsBaseDir);
          isset_hdfsBaseDir = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->colNames.clear();
            uint32_t _size9;
            ::apache::thrift::protocol::TType _etype12;
            xfer += iprot->readListBegin(_etype12, _size9);
            this->colNames.resize(_size9);
            uint32_t _i13;
            for (_i13 = 0; _i13 < _size9; ++_i13)
            {
              xfer += iprot->readString(this->colNames[_i13]);
            }
            xfer += iprot->readListEnd();
          }
          isset_colNames = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nullPartitionKeyValue);
          isset_nullPartitionKeyValue = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nullColumnValue);
          isset_nullColumnValue = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->partitions.clear();
            uint32_t _size14;
            ::apache::thrift::protocol::TType _ktype15;
            ::apache::thrift::protocol::TType _vtype16;
            xfer += iprot->readMapBegin(_ktype15, _vtype16, _size14);
            uint32_t _i18;
            for (_i18 = 0; _i18 < _size14; ++_i18)
            {
              int64_t _key19;
              xfer += iprot->readI64(_key19);
              THdfsPartition& _val20 = this->partitions[_key19];
              xfer += _val20.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          isset_partitions = true;
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

  if (!isset_hdfsBaseDir)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_colNames)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_nullPartitionKeyValue)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_nullColumnValue)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_partitions)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t THdfsTable::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("THdfsTable");

  ++fcnt;
  xfer += oprot->writeFieldBegin("hdfsBaseDir", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->hdfsBaseDir);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("colNames", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->colNames.size()));
    std::vector<std::string> ::const_iterator _iter21;
    for (_iter21 = this->colNames.begin(); _iter21 != this->colNames.end(); ++_iter21)
    {
      xfer += oprot->writeString((*_iter21));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("nullPartitionKeyValue", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->nullPartitionKeyValue);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("partitions", ::apache::thrift::protocol::T_MAP, 4);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_I64, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->partitions.size()));
    std::map<int64_t, THdfsPartition> ::const_iterator _iter22;
    for (_iter22 = this->partitions.begin(); _iter22 != this->partitions.end(); ++_iter22)
    {
      xfer += oprot->writeI64(_iter22->first);
      xfer += _iter22->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("nullColumnValue", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->nullColumnValue);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(THdfsTable &a, THdfsTable &b) {
  using ::std::swap;
  swap(a.hdfsBaseDir, b.hdfsBaseDir);
  swap(a.colNames, b.colNames);
  swap(a.nullPartitionKeyValue, b.nullPartitionKeyValue);
  swap(a.nullColumnValue, b.nullColumnValue);
  swap(a.partitions, b.partitions);
}

const char* THBaseTable::ascii_fingerprint = "16AF767043B70C30A915A930850B1F70";
const uint8_t THBaseTable::binary_fingerprint[16] = {0x16,0xAF,0x76,0x70,0x43,0xB7,0x0C,0x30,0xA9,0x15,0xA9,0x30,0x85,0x0B,0x1F,0x70};

uint32_t THBaseTable::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_tableName = false;
  bool isset_families = false;
  bool isset_qualifiers = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->tableName);
          isset_tableName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->families.clear();
            uint32_t _size23;
            ::apache::thrift::protocol::TType _etype26;
            xfer += iprot->readListBegin(_etype26, _size23);
            this->families.resize(_size23);
            uint32_t _i27;
            for (_i27 = 0; _i27 < _size23; ++_i27)
            {
              xfer += iprot->readString(this->families[_i27]);
            }
            xfer += iprot->readListEnd();
          }
          isset_families = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->qualifiers.clear();
            uint32_t _size28;
            ::apache::thrift::protocol::TType _etype31;
            xfer += iprot->readListBegin(_etype31, _size28);
            this->qualifiers.resize(_size28);
            uint32_t _i32;
            for (_i32 = 0; _i32 < _size28; ++_i32)
            {
              xfer += iprot->readString(this->qualifiers[_i32]);
            }
            xfer += iprot->readListEnd();
          }
          isset_qualifiers = true;
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

  if (!isset_tableName)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_families)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_qualifiers)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t THBaseTable::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("THBaseTable");

  ++fcnt;
  xfer += oprot->writeFieldBegin("tableName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->tableName);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("families", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->families.size()));
    std::vector<std::string> ::const_iterator _iter33;
    for (_iter33 = this->families.begin(); _iter33 != this->families.end(); ++_iter33)
    {
      xfer += oprot->writeString((*_iter33));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("qualifiers", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->qualifiers.size()));
    std::vector<std::string> ::const_iterator _iter34;
    for (_iter34 = this->qualifiers.begin(); _iter34 != this->qualifiers.end(); ++_iter34)
    {
      xfer += oprot->writeString((*_iter34));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(THBaseTable &a, THBaseTable &b) {
  using ::std::swap;
  swap(a.tableName, b.tableName);
  swap(a.families, b.families);
  swap(a.qualifiers, b.qualifiers);
}

const char* TTableDescriptor::ascii_fingerprint = "3BF3017E229F63281F413DC9D08A8AE6";
const uint8_t TTableDescriptor::binary_fingerprint[16] = {0x3B,0xF3,0x01,0x7E,0x22,0x9F,0x63,0x28,0x1F,0x41,0x3D,0xC9,0xD0,0x8A,0x8A,0xE6};

uint32_t TTableDescriptor::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id = false;
  bool isset_tableType = false;
  bool isset_numCols = false;
  bool isset_numClusteringCols = false;
  bool isset_tableName = false;
  bool isset_dbName = false;

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
          xfer += iprot->readI32(this->id);
          isset_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast35;
          xfer += iprot->readI32(ecast35);
          this->tableType = (TTableType::type)ecast35;
          isset_tableType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->numCols);
          isset_numCols = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->numClusteringCols);
          isset_numClusteringCols = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->hdfsTable.read(iprot);
          this->__isset.hdfsTable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->hbaseTable.read(iprot);
          this->__isset.hbaseTable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->tableName);
          isset_tableName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->dbName);
          isset_dbName = true;
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

  if (!isset_id)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_tableType)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_numCols)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_numClusteringCols)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_tableName)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_dbName)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TTableDescriptor::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TTableDescriptor");

  ++fcnt;
  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("tableType", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->tableType);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("numCols", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->numCols);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("numClusteringCols", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->numClusteringCols);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.hdfsTable) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("hdfsTable", ::apache::thrift::protocol::T_STRUCT, 5);
    xfer += this->hdfsTable.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.hbaseTable) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("hbaseTable", ::apache::thrift::protocol::T_STRUCT, 6);
    xfer += this->hbaseTable.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  ++fcnt;
  xfer += oprot->writeFieldBegin("tableName", ::apache::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->tableName);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("dbName", ::apache::thrift::protocol::T_STRING, 8);
  xfer += oprot->writeString(this->dbName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TTableDescriptor &a, TTableDescriptor &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.tableType, b.tableType);
  swap(a.numCols, b.numCols);
  swap(a.numClusteringCols, b.numClusteringCols);
  swap(a.hdfsTable, b.hdfsTable);
  swap(a.hbaseTable, b.hbaseTable);
  swap(a.tableName, b.tableName);
  swap(a.dbName, b.dbName);
  swap(a.__isset, b.__isset);
}

const char* TTupleDescriptor::ascii_fingerprint = "10850C26C1AD0C180808B8FC6F756B91";
const uint8_t TTupleDescriptor::binary_fingerprint[16] = {0x10,0x85,0x0C,0x26,0xC1,0xAD,0x0C,0x18,0x08,0x08,0xB8,0xFC,0x6F,0x75,0x6B,0x91};

uint32_t TTupleDescriptor::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_id = false;
  bool isset_byteSize = false;
  bool isset_numNullBytes = false;

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
          xfer += iprot->readI32(this->id);
          isset_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->byteSize);
          isset_byteSize = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->numNullBytes);
          isset_numNullBytes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->tableId);
          this->__isset.tableId = true;
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

  if (!isset_id)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_byteSize)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_numNullBytes)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TTupleDescriptor::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TTupleDescriptor");

  ++fcnt;
  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("byteSize", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->byteSize);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("numNullBytes", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->numNullBytes);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.tableId) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("tableId", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32(this->tableId);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TTupleDescriptor &a, TTupleDescriptor &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.byteSize, b.byteSize);
  swap(a.numNullBytes, b.numNullBytes);
  swap(a.tableId, b.tableId);
  swap(a.__isset, b.__isset);
}

const char* TDescriptorTable::ascii_fingerprint = "54EFE7ED1B60E4AEC21C6510DC01C166";
const uint8_t TDescriptorTable::binary_fingerprint[16] = {0x54,0xEF,0xE7,0xED,0x1B,0x60,0xE4,0xAE,0xC2,0x1C,0x65,0x10,0xDC,0x01,0xC1,0x66};

uint32_t TDescriptorTable::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_tupleDescriptors = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->slotDescriptors.clear();
            uint32_t _size36;
            ::apache::thrift::protocol::TType _etype39;
            xfer += iprot->readListBegin(_etype39, _size36);
            this->slotDescriptors.resize(_size36);
            uint32_t _i40;
            for (_i40 = 0; _i40 < _size36; ++_i40)
            {
              xfer += this->slotDescriptors[_i40].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.slotDescriptors = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tupleDescriptors.clear();
            uint32_t _size41;
            ::apache::thrift::protocol::TType _etype44;
            xfer += iprot->readListBegin(_etype44, _size41);
            this->tupleDescriptors.resize(_size41);
            uint32_t _i45;
            for (_i45 = 0; _i45 < _size41; ++_i45)
            {
              xfer += this->tupleDescriptors[_i45].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_tupleDescriptors = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tableDescriptors.clear();
            uint32_t _size46;
            ::apache::thrift::protocol::TType _etype49;
            xfer += iprot->readListBegin(_etype49, _size46);
            this->tableDescriptors.resize(_size46);
            uint32_t _i50;
            for (_i50 = 0; _i50 < _size46; ++_i50)
            {
              xfer += this->tableDescriptors[_i50].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.tableDescriptors = true;
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

  if (!isset_tupleDescriptors)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TDescriptorTable::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TDescriptorTable");

  if (this->__isset.slotDescriptors) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("slotDescriptors", ::apache::thrift::protocol::T_LIST, 1);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->slotDescriptors.size()));
      std::vector<TSlotDescriptor> ::const_iterator _iter51;
      for (_iter51 = this->slotDescriptors.begin(); _iter51 != this->slotDescriptors.end(); ++_iter51)
      {
        xfer += (*_iter51).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  ++fcnt;
  xfer += oprot->writeFieldBegin("tupleDescriptors", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->tupleDescriptors.size()));
    std::vector<TTupleDescriptor> ::const_iterator _iter52;
    for (_iter52 = this->tupleDescriptors.begin(); _iter52 != this->tupleDescriptors.end(); ++_iter52)
    {
      xfer += (*_iter52).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.tableDescriptors) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("tableDescriptors", ::apache::thrift::protocol::T_LIST, 3);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->tableDescriptors.size()));
      std::vector<TTableDescriptor> ::const_iterator _iter53;
      for (_iter53 = this->tableDescriptors.begin(); _iter53 != this->tableDescriptors.end(); ++_iter53)
      {
        xfer += (*_iter53).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TDescriptorTable &a, TDescriptorTable &b) {
  using ::std::swap;
  swap(a.slotDescriptors, b.slotDescriptors);
  swap(a.tupleDescriptors, b.tupleDescriptors);
  swap(a.tableDescriptors, b.tableDescriptors);
  swap(a.__isset, b.__isset);
}

} // namespace
