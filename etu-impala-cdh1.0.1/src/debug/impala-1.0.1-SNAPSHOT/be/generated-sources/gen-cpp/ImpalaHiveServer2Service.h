/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ImpalaHiveServer2Service_H
#define ImpalaHiveServer2Service_H

#include <thrift/TDispatchProcessor.h>
#include "ImpalaService_types.h"
#include "TCLIService.h"

namespace impala {

class ImpalaHiveServer2ServiceIf : virtual public  ::apache::hive::service::cli::thrift::TCLIServiceIf {
 public:
  virtual ~ImpalaHiveServer2ServiceIf() {}
  virtual void ResetCatalog(TResetCatalogResp& _return) = 0;
  virtual void ResetTable(TResetTableResp& _return, const TResetTableReq& request) = 0;
};

class ImpalaHiveServer2ServiceIfFactory : virtual public  ::apache::hive::service::cli::thrift::TCLIServiceIfFactory {
 public:
  typedef ImpalaHiveServer2ServiceIf Handler;

  virtual ~ImpalaHiveServer2ServiceIfFactory() {}

  virtual ImpalaHiveServer2ServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler( ::apache::hive::service::cli::thrift::TCLIServiceIf* /* handler */) = 0;
};

class ImpalaHiveServer2ServiceIfSingletonFactory : virtual public ImpalaHiveServer2ServiceIfFactory {
 public:
  ImpalaHiveServer2ServiceIfSingletonFactory(const boost::shared_ptr<ImpalaHiveServer2ServiceIf>& iface) : iface_(iface) {}
  virtual ~ImpalaHiveServer2ServiceIfSingletonFactory() {}

  virtual ImpalaHiveServer2ServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler( ::apache::hive::service::cli::thrift::TCLIServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<ImpalaHiveServer2ServiceIf> iface_;
};

class ImpalaHiveServer2ServiceNull : virtual public ImpalaHiveServer2ServiceIf , virtual public  ::apache::hive::service::cli::thrift::TCLIServiceNull {
 public:
  virtual ~ImpalaHiveServer2ServiceNull() {}
  void ResetCatalog(TResetCatalogResp& /* _return */) {
    return;
  }
  void ResetTable(TResetTableResp& /* _return */, const TResetTableReq& /* request */) {
    return;
  }
};


class ImpalaHiveServer2Service_ResetCatalog_args {
 public:

  ImpalaHiveServer2Service_ResetCatalog_args() {
  }

  virtual ~ImpalaHiveServer2Service_ResetCatalog_args() throw() {}


  bool operator == (const ImpalaHiveServer2Service_ResetCatalog_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ImpalaHiveServer2Service_ResetCatalog_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ImpalaHiveServer2Service_ResetCatalog_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ImpalaHiveServer2Service_ResetCatalog_pargs {
 public:


  virtual ~ImpalaHiveServer2Service_ResetCatalog_pargs() throw() {}


  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ImpalaHiveServer2Service_ResetCatalog_result__isset {
  _ImpalaHiveServer2Service_ResetCatalog_result__isset() : success(false) {}
  bool success;
} _ImpalaHiveServer2Service_ResetCatalog_result__isset;

class ImpalaHiveServer2Service_ResetCatalog_result {
 public:

  ImpalaHiveServer2Service_ResetCatalog_result() {
  }

  virtual ~ImpalaHiveServer2Service_ResetCatalog_result() throw() {}

  TResetCatalogResp success;

  _ImpalaHiveServer2Service_ResetCatalog_result__isset __isset;

  void __set_success(const TResetCatalogResp& val) {
    success = val;
    __isset.success = true;
  }

  bool operator == (const ImpalaHiveServer2Service_ResetCatalog_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ImpalaHiveServer2Service_ResetCatalog_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ImpalaHiveServer2Service_ResetCatalog_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ImpalaHiveServer2Service_ResetCatalog_presult__isset {
  _ImpalaHiveServer2Service_ResetCatalog_presult__isset() : success(false) {}
  bool success;
} _ImpalaHiveServer2Service_ResetCatalog_presult__isset;

class ImpalaHiveServer2Service_ResetCatalog_presult {
 public:


  virtual ~ImpalaHiveServer2Service_ResetCatalog_presult() throw() {}

  TResetCatalogResp* success;

  _ImpalaHiveServer2Service_ResetCatalog_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ImpalaHiveServer2Service_ResetTable_args__isset {
  _ImpalaHiveServer2Service_ResetTable_args__isset() : request(false) {}
  bool request;
} _ImpalaHiveServer2Service_ResetTable_args__isset;

class ImpalaHiveServer2Service_ResetTable_args {
 public:

  ImpalaHiveServer2Service_ResetTable_args() {
  }

  virtual ~ImpalaHiveServer2Service_ResetTable_args() throw() {}

  TResetTableReq request;

  _ImpalaHiveServer2Service_ResetTable_args__isset __isset;

  void __set_request(const TResetTableReq& val) {
    request = val;
    __isset.request = true;
  }

  bool operator == (const ImpalaHiveServer2Service_ResetTable_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const ImpalaHiveServer2Service_ResetTable_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ImpalaHiveServer2Service_ResetTable_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ImpalaHiveServer2Service_ResetTable_pargs {
 public:


  virtual ~ImpalaHiveServer2Service_ResetTable_pargs() throw() {}

  const TResetTableReq* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ImpalaHiveServer2Service_ResetTable_result__isset {
  _ImpalaHiveServer2Service_ResetTable_result__isset() : success(false) {}
  bool success;
} _ImpalaHiveServer2Service_ResetTable_result__isset;

class ImpalaHiveServer2Service_ResetTable_result {
 public:

  ImpalaHiveServer2Service_ResetTable_result() {
  }

  virtual ~ImpalaHiveServer2Service_ResetTable_result() throw() {}

  TResetTableResp success;

  _ImpalaHiveServer2Service_ResetTable_result__isset __isset;

  void __set_success(const TResetTableResp& val) {
    success = val;
    __isset.success = true;
  }

  bool operator == (const ImpalaHiveServer2Service_ResetTable_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ImpalaHiveServer2Service_ResetTable_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ImpalaHiveServer2Service_ResetTable_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ImpalaHiveServer2Service_ResetTable_presult__isset {
  _ImpalaHiveServer2Service_ResetTable_presult__isset() : success(false) {}
  bool success;
} _ImpalaHiveServer2Service_ResetTable_presult__isset;

class ImpalaHiveServer2Service_ResetTable_presult {
 public:


  virtual ~ImpalaHiveServer2Service_ResetTable_presult() throw() {}

  TResetTableResp* success;

  _ImpalaHiveServer2Service_ResetTable_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ImpalaHiveServer2ServiceClient : virtual public ImpalaHiveServer2ServiceIf, public  ::apache::hive::service::cli::thrift::TCLIServiceClient {
 public:
  ImpalaHiveServer2ServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
     ::apache::hive::service::cli::thrift::TCLIServiceClient(prot, prot) {}
  ImpalaHiveServer2ServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
     ::apache::hive::service::cli::thrift::TCLIServiceClient(iprot, oprot) {}
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ResetCatalog(TResetCatalogResp& _return);
  void send_ResetCatalog();
  void recv_ResetCatalog(TResetCatalogResp& _return);
  void ResetTable(TResetTableResp& _return, const TResetTableReq& request);
  void send_ResetTable(const TResetTableReq& request);
  void recv_ResetTable(TResetTableResp& _return);
};

class ImpalaHiveServer2ServiceProcessor : public  ::apache::hive::service::cli::thrift::TCLIServiceProcessor {
 protected:
  boost::shared_ptr<ImpalaHiveServer2ServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ImpalaHiveServer2ServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ResetCatalog(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_ResetTable(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ImpalaHiveServer2ServiceProcessor(boost::shared_ptr<ImpalaHiveServer2ServiceIf> iface) :
     ::apache::hive::service::cli::thrift::TCLIServiceProcessor(iface),
    iface_(iface) {
    processMap_["ResetCatalog"] = &ImpalaHiveServer2ServiceProcessor::process_ResetCatalog;
    processMap_["ResetTable"] = &ImpalaHiveServer2ServiceProcessor::process_ResetTable;
  }

  virtual ~ImpalaHiveServer2ServiceProcessor() {}
};

class ImpalaHiveServer2ServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ImpalaHiveServer2ServiceProcessorFactory(const ::boost::shared_ptr< ImpalaHiveServer2ServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ImpalaHiveServer2ServiceIfFactory > handlerFactory_;
};

class ImpalaHiveServer2ServiceMultiface : virtual public ImpalaHiveServer2ServiceIf, public  ::apache::hive::service::cli::thrift::TCLIServiceMultiface {
 public:
  ImpalaHiveServer2ServiceMultiface(std::vector<boost::shared_ptr<ImpalaHiveServer2ServiceIf> >& ifaces) : ifaces_(ifaces) {
    std::vector<boost::shared_ptr<ImpalaHiveServer2ServiceIf> >::iterator iter;
    for (iter = ifaces.begin(); iter != ifaces.end(); ++iter) {
       ::apache::hive::service::cli::thrift::TCLIServiceMultiface::add(*iter);
    }
  }
  virtual ~ImpalaHiveServer2ServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ImpalaHiveServer2ServiceIf> > ifaces_;
  ImpalaHiveServer2ServiceMultiface() {}
  void add(boost::shared_ptr<ImpalaHiveServer2ServiceIf> iface) {
     ::apache::hive::service::cli::thrift::TCLIServiceMultiface::add(iface);
    ifaces_.push_back(iface);
  }
 public:
  void ResetCatalog(TResetCatalogResp& _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ResetCatalog(_return);
    }
    ifaces_[i]->ResetCatalog(_return);
    return;
  }

  void ResetTable(TResetTableResp& _return, const TResetTableReq& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ResetTable(_return, request);
    }
    ifaces_[i]->ResetTable(_return, request);
    return;
  }

};

} // namespace

#endif
