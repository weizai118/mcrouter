/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 */
#include "MemcacheMessages.h"

namespace facebook {
namespace memcache {

constexpr const char* const McGetRequest::name;

void McGetRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, flags());
  writer.writeStructEnd();
  writer.writeStop();
}

void McGetRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(flags());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McGetReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, value());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, message());
  writer.writeField(5 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McGetReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(value());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(message());
        break;
      }
      case 5: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McSetRequest::name;

void McSetRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeStructEnd();
  writer.writeStop();
}

void McSetRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McSetReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, flags());
  writer.writeField(3 /* field id */, value());
  writer.writeField(4 /* field id */, message());
  writer.writeField(5 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McSetReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(flags());
        break;
      }
      case 3: {
        reader.readRawInto(value());
        break;
      }
      case 4: {
        reader.readRawInto(message());
        break;
      }
      case 5: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McDeleteRequest::name;

void McDeleteRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, flags());
  writer.writeField(3 /* field id */, exptime());
  writer.writeField(4 /* field id */, value());
  writer.writeStructEnd();
  writer.writeStop();
}

void McDeleteRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(flags());
        break;
      }
      case 3: {
        reader.readRawInto(exptime());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McDeleteReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, flags());
  writer.writeField(3 /* field id */, value());
  writer.writeField(4 /* field id */, message());
  writer.writeField(5 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McDeleteReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(flags());
        break;
      }
      case 3: {
        reader.readRawInto(value());
        break;
      }
      case 4: {
        reader.readRawInto(message());
        break;
      }
      case 5: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McLeaseGetRequest::name;

void McLeaseGetRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeStructEnd();
  writer.writeStop();
}

void McLeaseGetRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McLeaseGetReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, leaseToken());
  writer.writeField(3 /* field id */, value());
  writer.writeField(4 /* field id */, flags());
  writer.writeField(5 /* field id */, message());
  writer.writeField(6 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McLeaseGetReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(leaseToken());
        break;
      }
      case 3: {
        reader.readRawInto(value());
        break;
      }
      case 4: {
        reader.readRawInto(flags());
        break;
      }
      case 5: {
        reader.readRawInto(message());
        break;
      }
      case 6: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McLeaseSetRequest::name;

void McLeaseSetRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeField(5 /* field id */, leaseToken());
  writer.writeStructEnd();
  writer.writeStop();
}

void McLeaseSetRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      case 5: {
        reader.readRawInto(leaseToken());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McLeaseSetReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McLeaseSetReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McAddRequest::name;

void McAddRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeStructEnd();
  writer.writeStop();
}

void McAddRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McAddReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McAddReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McReplaceRequest::name;

void McReplaceRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeStructEnd();
  writer.writeStop();
}

void McReplaceRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McReplaceReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McReplaceReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McGetsRequest::name;

void McGetsRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeStructEnd();
  writer.writeStop();
}

void McGetsRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McGetsReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, casToken());
  writer.writeField(3 /* field id */, value());
  writer.writeField(4 /* field id */, flags());
  writer.writeField(5 /* field id */, message());
  writer.writeField(6 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McGetsReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(casToken());
        break;
      }
      case 3: {
        reader.readRawInto(value());
        break;
      }
      case 4: {
        reader.readRawInto(flags());
        break;
      }
      case 5: {
        reader.readRawInto(message());
        break;
      }
      case 6: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McCasRequest::name;

void McCasRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeField(5 /* field id */, casToken());
  writer.writeStructEnd();
  writer.writeStop();
}

void McCasRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      case 5: {
        reader.readRawInto(casToken());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McCasReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McCasReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McIncrRequest::name;

void McIncrRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, delta());
  writer.writeStructEnd();
  writer.writeStop();
}

void McIncrRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(delta());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McIncrReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, delta());
  writer.writeField(3 /* field id */, message());
  writer.writeField(4 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McIncrReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(delta());
        break;
      }
      case 3: {
        reader.readRawInto(message());
        break;
      }
      case 4: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McDecrRequest::name;

void McDecrRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, delta());
  writer.writeStructEnd();
  writer.writeStop();
}

void McDecrRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(delta());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McDecrReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, delta());
  writer.writeField(3 /* field id */, message());
  writer.writeField(4 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McDecrReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(delta());
        break;
      }
      case 3: {
        reader.readRawInto(message());
        break;
      }
      case 4: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McMetagetRequest::name;

void McMetagetRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeStructEnd();
  writer.writeStop();
}

void McMetagetRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McMetagetReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, age());
  writer.writeField(3 /* field id */, exptime());
  writer.writeField(4 /* field id */, ipv());
  writer.writeField(5 /* field id */, ipAddress());
  writer.writeField(6 /* field id */, message());
  writer.writeField(7 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McMetagetReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(age());
        break;
      }
      case 3: {
        reader.readRawInto(exptime());
        break;
      }
      case 4: {
        reader.readRawInto(ipv());
        break;
      }
      case 5: {
        reader.readRawInto(ipAddress());
        break;
      }
      case 6: {
        reader.readRawInto(message());
        break;
      }
      case 7: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McAppendRequest::name;

void McAppendRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeStructEnd();
  writer.writeStop();
}

void McAppendRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McAppendReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McAppendReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McPrependRequest::name;

void McPrependRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeField(3 /* field id */, flags());
  writer.writeField(4 /* field id */, value());
  writer.writeStructEnd();
  writer.writeStop();
}

void McPrependRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      case 3: {
        reader.readRawInto(flags());
        break;
      }
      case 4: {
        reader.readRawInto(value());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McPrependReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McPrependReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McTouchRequest::name;

void McTouchRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, exptime());
  writer.writeStructEnd();
  writer.writeStop();
}

void McTouchRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(exptime());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McTouchReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McTouchReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McFlushReRequest::name;

void McFlushReRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeStructEnd();
  writer.writeStop();
}

void McFlushReRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McFlushReReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McFlushReReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

constexpr const char* const McFlushAllRequest::name;

void McFlushAllRequest::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeField(2 /* field id */, delay());
  writer.writeStructEnd();
  writer.writeStop();
}

void McFlushAllRequest::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(key());
        break;
      }
      case 2: {
        reader.readRawInto(delay());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

void McFlushAllReply::serialize(carbon::CarbonProtocolWriter& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeField(2 /* field id */, message());
  writer.writeField(3 /* field id */, appSpecificErrorCode());
  writer.writeStructEnd();
  writer.writeStop();
}

void McFlushAllReply::deserialize(carbon::CarbonProtocolReader& reader) {
  reader.readStructBegin();
  while (true) {
    const auto pr = reader.readFieldHeader();
    const auto fieldType = pr.first;
    const auto fieldId = pr.second;

    if (fieldType == carbon::FieldType::Stop) {
      break;
    }

    switch (fieldId) {
      case 1: {
        reader.readRawInto(result());
        break;
      }
      case 2: {
        reader.readRawInto(message());
        break;
      }
      case 3: {
        reader.readRawInto(appSpecificErrorCode());
        break;
      }
      default: {
        reader.skip(fieldType);
        break;
      }
    }
  }
  reader.readStructEnd();
}

} // memcache
} // facebook
