include(FetchContent)

FetchContent_Declare(
        PTSD
        GIT_REPOSITORY     https://github.com/NTUT-FUCK-PTSD/practical-tools-for-simple-design
        GIT_TAG            submodule-ized
)
FetchContent_MakeAvailable(PTSD)

message(STATUS "PTSD: ${PTSD_SOURCE_DIR}")