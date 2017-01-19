/*********************************************
 * \file
 * \brief CLI Application to convert video streams into containers
 *********************************************/
#include <iostream>
void printHelp()
{
   std::cout << "Aqueti Video Converter Application\n"<<std::endl;
   std::cout << "This application is used to convert between conventional files and\n" 
             << "a sequence of Aqueti containers. Supported input types include CamImage\n"
             << "and HContainer objects, H.264 encoded files, and sequences of images\n"<<std::endl;

   std::cout << "Usage: VideoConverter <params>  <infile> <outfile>\n"<<std::endl;
   std::cout << "Parameters are optional. Supported paramters include:\n"
             << " -h print this help screen\n"
             << " -v provide verbose messages\n"
    
             <<std::endl;
}

int gVerbose = 0;

/**
 * \brief Main fuction for the videoConverter application
 **/
int main(int argc, char **argv)
{
   printHelp();
   return 0;
/*
    const char *output_type;

    // register all the codecs 
    avcodec_register_all();
    if (argc < 2) {
        printf("usage: %s output_type\n"
               "API example program to decode/encode a media stream with libavcodec.\n"
               "This program generates a synthetic stream and encodes it to a file\n"
               "named test.h264, test.mp2 or test.mpg depending on output_type.\n"
               "The encoded stream is then decoded and written to a raw data output.\n"
               "output_type must be choosen between 'h264', 'mp2', 'mpg'.\n",
               argv[0]);
        return 1;
    }
    output_type = argv[1];
    if (!strcmp(output_type, "h264")) {
        video_encode_example("test.h264", AV_CODEC_ID_H264);
    } else if (!strcmp(output_type, "mp2")) {
        audio_encode_example("test.mp2");
        audio_decode_example("test.sw", "test.mp2");
    } else if (!strcmp(output_type, "mpg")) {
        video_encode_example("test.mpg", AV_CODEC_ID_MPEG1VIDEO);
        video_decode_example("test%02d.pgm", "test.mpg");
    } else {
        fprintf(stderr, "Invalid output type '%s', choose between 'h264', 'mp2', or 'mpg'\n",
                output_type);
        return 1;
    }
    return 0;
   */
}

