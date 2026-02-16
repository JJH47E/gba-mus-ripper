#ifndef SONG_RIPPER_HPP
#define SONG_RIPPER_HPP

#include <cstdint>
#include <string>

struct RipSongOptions
{
    std::string in_gba_filepath;
    std::string out_mid_filepath;
    std::string song_address;
    int bank_number;
    bool bank_used;
    bool rc; // Rearrange Channels
    bool gs; // GS system exclusive message
    bool xg; // XG system exclusive message
    bool lv; // Linearise volume and velocities
    bool sv; // Simulate vibrato
};

// Function to parse arguments and return RipSongOptions
RipSongOptions parseRipSongArguments(int argc, char *argv[]);

// Function to rip the song based on the provided options
uint32_t ripSong(const RipSongOptions& options);

#endif // SONG_RIPPER_HPP
