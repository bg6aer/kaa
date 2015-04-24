/*
 * Copyright 2014-2015 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

# ifndef KAA_DEFAULTS_H_
# define KAA_DEFAULTS_H_

/**
 *
 * DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED.
 *
 */

# include "kaa_common.h"

# ifdef __cplusplus
extern "C" {
# endif

# define BUILD_VERSION                  "0.7.1-SNAPSHOT"
# define BUILD_COMMIT_HASH              ""

# define APPLICATION_TOKEN              "71422443811901512553"

# define CONFIG_SCHEMA_VERSION          2
# define PROFILE_SCHEMA_VERSION         1
# define SYSTEM_NF_SCHEMA_VERSION       1
# define USER_NF_SCHEMA_VERSION         1
# define LOG_SCHEMA_VERSION             2


# define KAA_SYNC_TIMEOUT               60000L



typedef struct {
    const char *    name;
    uint16_t         version;
} kaa_events_schema_version_t;

# define KAA_EVENT_SCHEMA_VERSIONS_SIZE    0

static const kaa_events_schema_version_t KAA_EVENT_SCHEMA_VERSIONS[KAA_EVENT_SCHEMA_VERSIONS_SIZE] = {
};



/**
 * @brief Uses to represent transport-specific connection data to establish
 * connection to Bootstrap servers.
 *
 * @see kaa_transport_protocol_id_t
 * @see kaa_access_point_t
 */
typedef struct {
    kaa_transport_protocol_id_t    protocol_id;
    kaa_access_point_t             access_point;
} kaa_bootstrap_server_connection_data_t;

# define KAA_BOOTSTRAP_ACCESS_POINT_COUNT    2

static const kaa_bootstrap_server_connection_data_t KAA_BOOTSTRAP_ACCESS_POINTS[KAA_BOOTSTRAP_ACCESS_POINT_COUNT] =
{
    {
        { 0xfb9a3cf0, 1 },
        {
            0x95f7e40f,
            315,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -124 , 53 , 51 , 3 , -125 , -109 , 11 , 15 , -81 , 56 , -127 , -39 , -31 , -67 , 85 , -45 , 113 , -48 , 48 , -66 , -122 , -87 , 87 , -64 , 58 , -62 , -112 , 69 , -80 , -9 , 55 , -76 , 38 , 30 , 7 , 77 , -61 , -33 , -44 , -5 , 56 , -26 , 77 , 110 , 108 , 38 , -54 , -105 , 22 , -108 , 74 , 99 , -84 , -124 , 4 , 47 , -40 , -35 , 108 , -113 , -56 , 59 , -44 , 99 , 110 , -110 , -3 , 74 , 66 , 54 , 126 , -121 , -42 , -101 , -10 , -29 , -102 , 106 , 32 , -25 , 72 , -79 , -111 , 96 , -2 , -7 , 27 , 81 , 85 , -124 , 59 , -124 , -80 , -56 , -116 , 99 , 19 , 88 , -70 , 56 , -35 , -127 , -71 , 105 , 87 , -70 , 22 , -46 , 94 , 65 , 106 , -42 , 121 , 90 , 106 , -66 , -75 , 4 , -99 , 44 , 54 , -117 , -65 , 100 , -88 , 2 , -15 , -114 , -72 , 59 , 78 , -106 , -114 , -28 , -105 , 71 , 37 , -52 , -106 , 70 , -58 , -19 , -41 , 3 , -60 , -60 , 110 , 12 , 79 , -118 , 26 , -120 , -120 , 83 , 64 , 21 , -18 , 0 , -72 , 19 , -30 , 89 , 25 , 7 , -37 , 83 , 59 , -69 , -108 , 80 , -81 , -111 , 124 , 102 , 33 , -96 , -109 , 71 , 84 , -111 , -23 , -19 , -36 , -36 , 60 , -123 , -70 , 51 , 47 , 66 , -11 , -90 , -22 , 74 , 105 , 121 , 34 , -31 , 120 , 77 , -89 , 102 , 27 , 110 , 69 , 83 , 65 , -26 , -7 , -107 , 116 , -125 , 109 , -47 , 45 , 30 , -71 , 121 , 127 , 67 , -59 , 116 , -61 , 6 , -80 , 0 , -75 , 81 , -60 , 61 , -83 , 64 , 64 , 75 , 63 , -11 , 50 , 40 , -53 , 38 , 30 , -73 , -95 , -105 , -124 , 69 , 76 , 45 , -63 , -50 , -101 , -5 , 23 , -97 , 122 , -109 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 9 , 49 , 48 , 46 , 50 , 46 , 51 , 46 , 56 , 57 , 0 , 0 , 38 , -95             }
        }
    },
    {
        { 0x56c8ff92, 1 },
        {
            0x95f7e40f,
            315,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -124 , 53 , 51 , 3 , -125 , -109 , 11 , 15 , -81 , 56 , -127 , -39 , -31 , -67 , 85 , -45 , 113 , -48 , 48 , -66 , -122 , -87 , 87 , -64 , 58 , -62 , -112 , 69 , -80 , -9 , 55 , -76 , 38 , 30 , 7 , 77 , -61 , -33 , -44 , -5 , 56 , -26 , 77 , 110 , 108 , 38 , -54 , -105 , 22 , -108 , 74 , 99 , -84 , -124 , 4 , 47 , -40 , -35 , 108 , -113 , -56 , 59 , -44 , 99 , 110 , -110 , -3 , 74 , 66 , 54 , 126 , -121 , -42 , -101 , -10 , -29 , -102 , 106 , 32 , -25 , 72 , -79 , -111 , 96 , -2 , -7 , 27 , 81 , 85 , -124 , 59 , -124 , -80 , -56 , -116 , 99 , 19 , 88 , -70 , 56 , -35 , -127 , -71 , 105 , 87 , -70 , 22 , -46 , 94 , 65 , 106 , -42 , 121 , 90 , 106 , -66 , -75 , 4 , -99 , 44 , 54 , -117 , -65 , 100 , -88 , 2 , -15 , -114 , -72 , 59 , 78 , -106 , -114 , -28 , -105 , 71 , 37 , -52 , -106 , 70 , -58 , -19 , -41 , 3 , -60 , -60 , 110 , 12 , 79 , -118 , 26 , -120 , -120 , 83 , 64 , 21 , -18 , 0 , -72 , 19 , -30 , 89 , 25 , 7 , -37 , 83 , 59 , -69 , -108 , 80 , -81 , -111 , 124 , 102 , 33 , -96 , -109 , 71 , 84 , -111 , -23 , -19 , -36 , -36 , 60 , -123 , -70 , 51 , 47 , 66 , -11 , -90 , -22 , 74 , 105 , 121 , 34 , -31 , 120 , 77 , -89 , 102 , 27 , 110 , 69 , 83 , 65 , -26 , -7 , -107 , 116 , -125 , 109 , -47 , 45 , 30 , -71 , 121 , 127 , 67 , -59 , 116 , -61 , 6 , -80 , 0 , -75 , 81 , -60 , 61 , -83 , 64 , 64 , 75 , 63 , -11 , 50 , 40 , -53 , 38 , 30 , -73 , -95 , -105 , -124 , 69 , 76 , 45 , -63 , -50 , -101 , -5 , 23 , -97 , 122 , -109 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 9 , 49 , 48 , 46 , 50 , 46 , 51 , 46 , 56 , 57 , 0 , 0 , 38 , -96             }
        }
    }};



# define KAA_CONFIGURATION_DATA_LENGTH    18

static const char KAA_CONFIGURATION_DATA[KAA_CONFIGURATION_DATA_LENGTH] =
{
0 , 0 , 55 , -26 , 2 , -11 , -22 , -92 , 70 , 34 , -128 , 21 , -17 , -124 , 68 , 57 , 44 , -71 };

# ifdef __cplusplus
} // extern "C"
# endif

# endif /* KAA_DEFAULTS_H_ */

