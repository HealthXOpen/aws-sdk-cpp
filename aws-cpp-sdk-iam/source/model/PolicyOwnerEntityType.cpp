﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iam/model/PolicyOwnerEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace PolicyOwnerEntityTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int ROLE_HASH = HashingUtils::HashString("ROLE");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");


        PolicyOwnerEntityType GetPolicyOwnerEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return PolicyOwnerEntityType::USER;
          }
          else if (hashCode == ROLE_HASH)
          {
            return PolicyOwnerEntityType::ROLE;
          }
          else if (hashCode == GROUP_HASH)
          {
            return PolicyOwnerEntityType::GROUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyOwnerEntityType>(hashCode);
          }

          return PolicyOwnerEntityType::NOT_SET;
        }

        Aws::String GetNameForPolicyOwnerEntityType(PolicyOwnerEntityType enumValue)
        {
          switch(enumValue)
          {
          case PolicyOwnerEntityType::USER:
            return "USER";
          case PolicyOwnerEntityType::ROLE:
            return "ROLE";
          case PolicyOwnerEntityType::GROUP:
            return "GROUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PolicyOwnerEntityTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
