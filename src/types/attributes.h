#pragma once

#include <stdint.h>
#include <vector>
#include <string>

/// @brief Message/Signal attributes
enum class AttributeType
{
  /// @brief Message cycle time attribute
  CycleTime,

  /// @brief Signal start value attribute
  StartValue,

  /// @brief Undefined attribute
  Undefined
};

struct AttributeDescriptor_t
{
  /// @brief Attribute message ID
  uint32_t MsgId;

  /// @brief Attribute type
  AttributeType Type;

  /// @brief Attribute name
  std::string Name;

  /// @brief Signal name (empty if not a StartValue attribute)
  std::string SignalName;

  /// @brief Attribute value
  int32_t Value;
};

