// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Types.proto

#include "Types.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace common {
class MajorTypeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MajorType> _instance;
} _MajorType_default_instance_;
}  // namespace common
static void InitDefaultsscc_info_MajorType_Types_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::common::_MajorType_default_instance_;
    new (ptr) ::common::MajorType();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::common::MajorType::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MajorType_Types_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MajorType_Types_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Types_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_Types_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Types_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Types_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::common::MajorType, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::common::MajorType, minor_type_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, mode_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, width_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, precision_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, scale_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, timezone_),
  PROTOBUF_FIELD_OFFSET(::common::MajorType, sub_type_),
  0,
  1,
  2,
  3,
  4,
  5,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::common::MajorType)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::common::_MajorType_default_instance_),
};

const char descriptor_table_protodef_Types_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Types.proto\022\006common\"\272\001\n\tMajorType\022%\n\nm"
  "inor_type\030\001 \001(\0162\021.common.MinorType\022\036\n\004mo"
  "de\030\002 \001(\0162\020.common.DataMode\022\r\n\005width\030\003 \001("
  "\005\022\021\n\tprecision\030\004 \001(\005\022\r\n\005scale\030\005 \001(\005\022\020\n\010t"
  "imeZone\030\006 \001(\005\022#\n\010sub_type\030\007 \003(\0162\021.common"
  ".MinorType*\265\004\n\tMinorType\022\010\n\004LATE\020\000\022\007\n\003MA"
  "P\020\001\022\013\n\007TINYINT\020\003\022\014\n\010SMALLINT\020\004\022\007\n\003INT\020\005\022"
  "\n\n\006BIGINT\020\006\022\014\n\010DECIMAL9\020\007\022\r\n\tDECIMAL18\020\010"
  "\022\023\n\017DECIMAL28SPARSE\020\t\022\023\n\017DECIMAL38SPARSE"
  "\020\n\022\t\n\005MONEY\020\013\022\010\n\004DATE\020\014\022\010\n\004TIME\020\r\022\n\n\006TIM"
  "ETZ\020\016\022\017\n\013TIMESTAMPTZ\020\017\022\r\n\tTIMESTAMP\020\020\022\014\n"
  "\010INTERVAL\020\021\022\n\n\006FLOAT4\020\022\022\n\n\006FLOAT8\020\023\022\007\n\003B"
  "IT\020\024\022\r\n\tFIXEDCHAR\020\025\022\017\n\013FIXED16CHAR\020\026\022\017\n\013"
  "FIXEDBINARY\020\027\022\013\n\007VARCHAR\020\030\022\r\n\tVAR16CHAR\020"
  "\031\022\r\n\tVARBINARY\020\032\022\t\n\005UINT1\020\035\022\t\n\005UINT2\020\036\022\t"
  "\n\005UINT4\020\037\022\t\n\005UINT8\020 \022\022\n\016DECIMAL28DENSE\020!"
  "\022\022\n\016DECIMAL38DENSE\020\"\022\016\n\nDM_UNKNOWN\020%\022\020\n\014"
  "INTERVALYEAR\020&\022\017\n\013INTERVALDAY\020\'\022\010\n\004LIST\020"
  "(\022\022\n\016GENERIC_OBJECT\020)\022\t\n\005UNION\020*\022\016\n\nVARD"
  "ECIMAL\020+\022\010\n\004DICT\020,*=\n\010DataMode\022\017\n\013DM_OPT"
  "IONAL\020\000\022\017\n\013DM_REQUIRED\020\001\022\017\n\013DM_REPEATED\020"
  "\002B-\n\035org.apache.drill.common.typesB\nType"
  "ProtosH\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Types_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Types_2eproto_sccs[1] = {
  &scc_info_MajorType_Types_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Types_2eproto_once;
static bool descriptor_table_Types_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Types_2eproto = {
  &descriptor_table_Types_2eproto_initialized, descriptor_table_protodef_Types_2eproto, "Types.proto", 888,
  &descriptor_table_Types_2eproto_once, descriptor_table_Types_2eproto_sccs, descriptor_table_Types_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Types_2eproto::offsets,
  file_level_metadata_Types_2eproto, 1, file_level_enum_descriptors_Types_2eproto, file_level_service_descriptors_Types_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Types_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Types_2eproto), true);
namespace common {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MinorType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Types_2eproto);
  return file_level_enum_descriptors_Types_2eproto[0];
}
bool MinorType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Types_2eproto);
  return file_level_enum_descriptors_Types_2eproto[1];
}
bool DataMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void MajorType::InitAsDefaultInstance() {
}
class MajorType::_Internal {
 public:
  using HasBits = decltype(std::declval<MajorType>()._has_bits_);
  static void set_has_minor_type(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_precision(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_scale(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_timezone(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

MajorType::MajorType()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.MajorType)
}
MajorType::MajorType(const MajorType& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      sub_type_(from.sub_type_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&minor_type_, &from.minor_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&timezone_) -
    reinterpret_cast<char*>(&minor_type_)) + sizeof(timezone_));
  // @@protoc_insertion_point(copy_constructor:common.MajorType)
}

void MajorType::SharedCtor() {
  ::memset(&minor_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timezone_) -
      reinterpret_cast<char*>(&minor_type_)) + sizeof(timezone_));
}

MajorType::~MajorType() {
  // @@protoc_insertion_point(destructor:common.MajorType)
  SharedDtor();
}

void MajorType::SharedDtor() {
}

void MajorType::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MajorType& MajorType::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MajorType_Types_2eproto.base);
  return *internal_default_instance();
}


void MajorType::Clear() {
// @@protoc_insertion_point(message_clear_start:common.MajorType)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sub_type_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&minor_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&timezone_) -
        reinterpret_cast<char*>(&minor_type_)) + sizeof(timezone_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* MajorType::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .common.MinorType minor_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::common::MinorType_IsValid(val))) {
            _internal_set_minor_type(static_cast<::common::MinorType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .common.DataMode mode = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::common::DataMode_IsValid(val))) {
            _internal_set_mode(static_cast<::common::DataMode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional int32 width = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 precision = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_precision(&has_bits);
          precision_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 scale = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_scale(&has_bits);
          scale_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 timeZone = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_timezone(&has_bits);
          timezone_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .common.MinorType sub_type = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          ptr -= 1;
          do {
            ptr += 1;
            ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
            CHK_(ptr);
            if (PROTOBUF_PREDICT_TRUE(::common::MinorType_IsValid(val))) {
              _internal_add_sub_type(static_cast<::common::MinorType>(val));
            } else {
              ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(7, val, mutable_unknown_fields());
            }
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<56>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_sub_type(), ptr, ctx, ::common::MinorType_IsValid, &_internal_metadata_, 7);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MajorType::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.MajorType)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .common.MinorType minor_type = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_minor_type(), target);
  }

  // optional .common.DataMode mode = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_mode(), target);
  }

  // optional int32 width = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_width(), target);
  }

  // optional int32 precision = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_precision(), target);
  }

  // optional int32 scale = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_scale(), target);
  }

  // optional int32 timeZone = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_timezone(), target);
  }

  // repeated .common.MinorType sub_type = 7;
  for (int i = 0, n = this->_internal_sub_type_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
        7, this->_internal_sub_type(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:common.MajorType)
  return target;
}

size_t MajorType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:common.MajorType)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .common.MinorType sub_type = 7;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_sub_type_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(
        this->_internal_sub_type(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional .common.MinorType minor_type = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_minor_type());
    }

    // optional .common.DataMode mode = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_mode());
    }

    // optional int32 width = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_width());
    }

    // optional int32 precision = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_precision());
    }

    // optional int32 scale = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_scale());
    }

    // optional int32 timeZone = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_timezone());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MajorType::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:common.MajorType)
  GOOGLE_DCHECK_NE(&from, this);
  const MajorType* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MajorType>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:common.MajorType)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:common.MajorType)
    MergeFrom(*source);
  }
}

void MajorType::MergeFrom(const MajorType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:common.MajorType)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sub_type_.MergeFrom(from.sub_type_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      minor_type_ = from.minor_type_;
    }
    if (cached_has_bits & 0x00000002u) {
      mode_ = from.mode_;
    }
    if (cached_has_bits & 0x00000004u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000008u) {
      precision_ = from.precision_;
    }
    if (cached_has_bits & 0x00000010u) {
      scale_ = from.scale_;
    }
    if (cached_has_bits & 0x00000020u) {
      timezone_ = from.timezone_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MajorType::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:common.MajorType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MajorType::CopyFrom(const MajorType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:common.MajorType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MajorType::IsInitialized() const {
  return true;
}

void MajorType::InternalSwap(MajorType* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  sub_type_.InternalSwap(&other->sub_type_);
  swap(minor_type_, other->minor_type_);
  swap(mode_, other->mode_);
  swap(width_, other->width_);
  swap(precision_, other->precision_);
  swap(scale_, other->scale_);
  swap(timezone_, other->timezone_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MajorType::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::common::MajorType* Arena::CreateMaybeMessage< ::common::MajorType >(Arena* arena) {
  return Arena::CreateInternal< ::common::MajorType >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
