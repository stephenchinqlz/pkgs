/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "RuntimeProfile_types.h"

#include <algorithm>

namespace impala {

int _kTCounterTypeValues[] = {
  TCounterType::UNIT,
  TCounterType::UNIT_PER_SECOND,
  TCounterType::CPU_TICKS,
  TCounterType::BYTES,
  TCounterType::BYTES_PER_SECOND,
  TCounterType::TIME_NS,
  TCounterType::DOUBLE_VALUE
};
const char* _kTCounterTypeNames[] = {
  "UNIT",
  "UNIT_PER_SECOND",
  "CPU_TICKS",
  "BYTES",
  "BYTES_PER_SECOND",
  "TIME_NS",
  "DOUBLE_VALUE"
};
const std::map<int, const char*> _TCounterType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kTCounterTypeValues, _kTCounterTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* TCounter::ascii_fingerprint = "8AD8F7908FF0D5FB40F4F4BAEA3D0B0A";
const uint8_t TCounter::binary_fingerprint[16] = {0x8A,0xD8,0xF7,0x90,0x8F,0xF0,0xD5,0xFB,0x40,0xF4,0xF4,0xBA,0xEA,0x3D,0x0B,0x0A};

uint32_t TCounter::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_name = false;
  bool isset_type = false;
  bool isset_value = false;

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
          xfer += iprot->readString(this->name);
          isset_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type = (TCounterType::type)ecast0;
          isset_type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->value);
          isset_value = true;
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

  if (!isset_name)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_type)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TCounter::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TCounter");

  ++fcnt;
  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TCounter &a, TCounter &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.type, b.type);
  swap(a.value, b.value);
}

const char* TEventSequence::ascii_fingerprint = "D1A02872D0E8B7968A18753F2DB91154";
const uint8_t TEventSequence::binary_fingerprint[16] = {0xD1,0xA0,0x28,0x72,0xD0,0xE8,0xB7,0x96,0x8A,0x18,0x75,0x3F,0x2D,0xB9,0x11,0x54};

uint32_t TEventSequence::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_name = false;
  bool isset_timestamps = false;
  bool isset_labels = false;

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
          xfer += iprot->readString(this->name);
          isset_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->timestamps.clear();
            uint32_t _size1;
            ::apache::thrift::protocol::TType _etype4;
            xfer += iprot->readListBegin(_etype4, _size1);
            this->timestamps.resize(_size1);
            uint32_t _i5;
            for (_i5 = 0; _i5 < _size1; ++_i5)
            {
              xfer += iprot->readI64(this->timestamps[_i5]);
            }
            xfer += iprot->readListEnd();
          }
          isset_timestamps = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->labels.clear();
            uint32_t _size6;
            ::apache::thrift::protocol::TType _etype9;
            xfer += iprot->readListBegin(_etype9, _size6);
            this->labels.resize(_size6);
            uint32_t _i10;
            for (_i10 = 0; _i10 < _size6; ++_i10)
            {
              xfer += iprot->readString(this->labels[_i10]);
            }
            xfer += iprot->readListEnd();
          }
          isset_labels = true;
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

  if (!isset_name)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_timestamps)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_labels)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TEventSequence::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TEventSequence");

  ++fcnt;
  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("timestamps", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I64, static_cast<uint32_t>(this->timestamps.size()));
    std::vector<int64_t> ::const_iterator _iter11;
    for (_iter11 = this->timestamps.begin(); _iter11 != this->timestamps.end(); ++_iter11)
    {
      xfer += oprot->writeI64((*_iter11));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("labels", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->labels.size()));
    std::vector<std::string> ::const_iterator _iter12;
    for (_iter12 = this->labels.begin(); _iter12 != this->labels.end(); ++_iter12)
    {
      xfer += oprot->writeString((*_iter12));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TEventSequence &a, TEventSequence &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.timestamps, b.timestamps);
  swap(a.labels, b.labels);
}

const char* TRuntimeProfileNode::ascii_fingerprint = "4015F22745A532A9A586A67370B0996A";
const uint8_t TRuntimeProfileNode::binary_fingerprint[16] = {0x40,0x15,0xF2,0x27,0x45,0xA5,0x32,0xA9,0xA5,0x86,0xA6,0x73,0x70,0xB0,0x99,0x6A};

uint32_t TRuntimeProfileNode::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_name = false;
  bool isset_num_children = false;
  bool isset_counters = false;
  bool isset_metadata = false;
  bool isset_indent = false;
  bool isset_info_strings = false;
  bool isset_info_strings_display_order = false;
  bool isset_child_counters_map = false;

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
          xfer += iprot->readString(this->name);
          isset_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->num_children);
          isset_num_children = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->counters.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _etype16;
            xfer += iprot->readListBegin(_etype16, _size13);
            this->counters.resize(_size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              xfer += this->counters[_i17].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_counters = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->metadata);
          isset_metadata = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->indent);
          isset_indent = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->info_strings.clear();
            uint32_t _size18;
            ::apache::thrift::protocol::TType _ktype19;
            ::apache::thrift::protocol::TType _vtype20;
            xfer += iprot->readMapBegin(_ktype19, _vtype20, _size18);
            uint32_t _i22;
            for (_i22 = 0; _i22 < _size18; ++_i22)
            {
              std::string _key23;
              xfer += iprot->readString(_key23);
              std::string& _val24 = this->info_strings[_key23];
              xfer += iprot->readString(_val24);
            }
            xfer += iprot->readMapEnd();
          }
          isset_info_strings = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->info_strings_display_order.clear();
            uint32_t _size25;
            ::apache::thrift::protocol::TType _etype28;
            xfer += iprot->readListBegin(_etype28, _size25);
            this->info_strings_display_order.resize(_size25);
            uint32_t _i29;
            for (_i29 = 0; _i29 < _size25; ++_i29)
            {
              xfer += iprot->readString(this->info_strings_display_order[_i29]);
            }
            xfer += iprot->readListEnd();
          }
          isset_info_strings_display_order = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->child_counters_map.clear();
            uint32_t _size30;
            ::apache::thrift::protocol::TType _ktype31;
            ::apache::thrift::protocol::TType _vtype32;
            xfer += iprot->readMapBegin(_ktype31, _vtype32, _size30);
            uint32_t _i34;
            for (_i34 = 0; _i34 < _size30; ++_i34)
            {
              std::string _key35;
              xfer += iprot->readString(_key35);
              std::set<std::string> & _val36 = this->child_counters_map[_key35];
              {
                _val36.clear();
                uint32_t _size37;
                ::apache::thrift::protocol::TType _etype40;
                xfer += iprot->readSetBegin(_etype40, _size37);
                uint32_t _i41;
                for (_i41 = 0; _i41 < _size37; ++_i41)
                {
                  std::string _elem42;
                  xfer += iprot->readString(_elem42);
                  _val36.insert(_elem42);
                }
                xfer += iprot->readSetEnd();
              }
            }
            xfer += iprot->readMapEnd();
          }
          isset_child_counters_map = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->event_sequences.clear();
            uint32_t _size43;
            ::apache::thrift::protocol::TType _etype46;
            xfer += iprot->readListBegin(_etype46, _size43);
            this->event_sequences.resize(_size43);
            uint32_t _i47;
            for (_i47 = 0; _i47 < _size43; ++_i47)
            {
              xfer += this->event_sequences[_i47].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.event_sequences = true;
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

  if (!isset_name)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_num_children)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_counters)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_metadata)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_indent)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_info_strings)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_info_strings_display_order)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_child_counters_map)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TRuntimeProfileNode::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TRuntimeProfileNode");

  ++fcnt;
  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("num_children", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->num_children);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("counters", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->counters.size()));
    std::vector<TCounter> ::const_iterator _iter48;
    for (_iter48 = this->counters.begin(); _iter48 != this->counters.end(); ++_iter48)
    {
      xfer += (*_iter48).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("metadata", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->metadata);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("indent", ::apache::thrift::protocol::T_BOOL, 5);
  xfer += oprot->writeBool(this->indent);
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("info_strings", ::apache::thrift::protocol::T_MAP, 6);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->info_strings.size()));
    std::map<std::string, std::string> ::const_iterator _iter49;
    for (_iter49 = this->info_strings.begin(); _iter49 != this->info_strings.end(); ++_iter49)
    {
      xfer += oprot->writeString(_iter49->first);
      xfer += oprot->writeString(_iter49->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("info_strings_display_order", ::apache::thrift::protocol::T_LIST, 7);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->info_strings_display_order.size()));
    std::vector<std::string> ::const_iterator _iter50;
    for (_iter50 = this->info_strings_display_order.begin(); _iter50 != this->info_strings_display_order.end(); ++_iter50)
    {
      xfer += oprot->writeString((*_iter50));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  ++fcnt;
  xfer += oprot->writeFieldBegin("child_counters_map", ::apache::thrift::protocol::T_MAP, 8);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_SET, static_cast<uint32_t>(this->child_counters_map.size()));
    std::map<std::string, std::set<std::string> > ::const_iterator _iter51;
    for (_iter51 = this->child_counters_map.begin(); _iter51 != this->child_counters_map.end(); ++_iter51)
    {
      xfer += oprot->writeString(_iter51->first);
      {
        xfer += oprot->writeSetBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(_iter51->second.size()));
        std::set<std::string> ::const_iterator _iter52;
        for (_iter52 = _iter51->second.begin(); _iter52 != _iter51->second.end(); ++_iter52)
        {
          xfer += oprot->writeString((*_iter52));
        }
        xfer += oprot->writeSetEnd();
      }
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.event_sequences) {
    ++fcnt;
    xfer += oprot->writeFieldBegin("event_sequences", ::apache::thrift::protocol::T_LIST, 9);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->event_sequences.size()));
      std::vector<TEventSequence> ::const_iterator _iter53;
      for (_iter53 = this->event_sequences.begin(); _iter53 != this->event_sequences.end(); ++_iter53)
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

void swap(TRuntimeProfileNode &a, TRuntimeProfileNode &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.num_children, b.num_children);
  swap(a.counters, b.counters);
  swap(a.metadata, b.metadata);
  swap(a.indent, b.indent);
  swap(a.info_strings, b.info_strings);
  swap(a.info_strings_display_order, b.info_strings_display_order);
  swap(a.child_counters_map, b.child_counters_map);
  swap(a.event_sequences, b.event_sequences);
  swap(a.__isset, b.__isset);
}

const char* TRuntimeProfileTree::ascii_fingerprint = "46D360250C2023560AA0631F5261DA3C";
const uint8_t TRuntimeProfileTree::binary_fingerprint[16] = {0x46,0xD3,0x60,0x25,0x0C,0x20,0x23,0x56,0x0A,0xA0,0x63,0x1F,0x52,0x61,0xDA,0x3C};

uint32_t TRuntimeProfileTree::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_nodes = false;

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
            this->nodes.clear();
            uint32_t _size54;
            ::apache::thrift::protocol::TType _etype57;
            xfer += iprot->readListBegin(_etype57, _size54);
            this->nodes.resize(_size54);
            uint32_t _i58;
            for (_i58 = 0; _i58 < _size54; ++_i58)
            {
              xfer += this->nodes[_i58].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          isset_nodes = true;
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

  if (!isset_nodes)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TRuntimeProfileTree::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  uint32_t fcnt = 0;
  xfer += oprot->writeStructBegin("TRuntimeProfileTree");

  ++fcnt;
  xfer += oprot->writeFieldBegin("nodes", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->nodes.size()));
    std::vector<TRuntimeProfileNode> ::const_iterator _iter59;
    for (_iter59 = this->nodes.begin(); _iter59 != this->nodes.end(); ++_iter59)
    {
      xfer += (*_iter59).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TRuntimeProfileTree &a, TRuntimeProfileTree &b) {
  using ::std::swap;
  swap(a.nodes, b.nodes);
}

} // namespace
