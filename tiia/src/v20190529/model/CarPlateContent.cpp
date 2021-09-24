/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tiia/v20190529/model/CarPlateContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

CarPlateContent::CarPlateContent() :
    m_plateHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_plateLocationHasBeenSet(false)
{
}

CoreInternalOutcome CarPlateContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Plate") && !value["Plate"].IsNull())
    {
        if (!value["Plate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarPlateContent.Plate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plate = string(value["Plate"].GetString());
        m_plateHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarPlateContent.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarPlateContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PlateLocation") && !value["PlateLocation"].IsNull())
    {
        if (!value["PlateLocation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CarPlateContent.PlateLocation` is not array type"));

        const rapidjson::Value &tmpValue = value["PlateLocation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_plateLocation.push_back(item);
        }
        m_plateLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CarPlateContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_plateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plate.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_plateLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_plateLocation.begin(); itr != m_plateLocation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CarPlateContent::GetPlate() const
{
    return m_plate;
}

void CarPlateContent::SetPlate(const string& _plate)
{
    m_plate = _plate;
    m_plateHasBeenSet = true;
}

bool CarPlateContent::PlateHasBeenSet() const
{
    return m_plateHasBeenSet;
}

string CarPlateContent::GetColor() const
{
    return m_color;
}

void CarPlateContent::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool CarPlateContent::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string CarPlateContent::GetType() const
{
    return m_type;
}

void CarPlateContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CarPlateContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Coord> CarPlateContent::GetPlateLocation() const
{
    return m_plateLocation;
}

void CarPlateContent::SetPlateLocation(const vector<Coord>& _plateLocation)
{
    m_plateLocation = _plateLocation;
    m_plateLocationHasBeenSet = true;
}

bool CarPlateContent::PlateLocationHasBeenSet() const
{
    return m_plateLocationHasBeenSet;
}

