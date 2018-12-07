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

#include <aws/alexaforbusiness/model/BusinessReportFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace BusinessReportFormatMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int CSV_ZIP_HASH = HashingUtils::HashString("CSV_ZIP");


        BusinessReportFormat GetBusinessReportFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return BusinessReportFormat::CSV;
          }
          else if (hashCode == CSV_ZIP_HASH)
          {
            return BusinessReportFormat::CSV_ZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BusinessReportFormat>(hashCode);
          }

          return BusinessReportFormat::NOT_SET;
        }

        Aws::String GetNameForBusinessReportFormat(BusinessReportFormat enumValue)
        {
          switch(enumValue)
          {
          case BusinessReportFormat::CSV:
            return "CSV";
          case BusinessReportFormat::CSV_ZIP:
            return "CSV_ZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BusinessReportFormatMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
