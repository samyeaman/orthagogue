#ifndef cmd_constants_h
#define cmd_constants_h
#include "../configure.h"
#include "../blast_common/types.h"
//#include "types.h"
//! @ingroup terminal
// \{
/**
   @file
   @brief Configure the details of the man page
   @author Ole Kristian Ekseth (oekseth)
**/
//! Name of the software
static char *PROGRAM_NAME = "orthAgogue";
//const static char *DEVELOPER_EMAIL = "olekrie@stud.ntnu.no";
//! Email of contact
const static char *DEVELOPER_EMAIL = "oekseth@gmail.com";
//! Person of contact
const static char *DEVELOPER_NAME = "O.K. Ekseth";
//const static char *DEVELOPER_COMPANY = "Norwegian High Performance Computing Group (HPGC)";
//! Company of contact
const static char *DEVELOPER_COMPANY = "High Performance Computing Group, NTNU, Norway";
//const static char *README_FILE = "documentation/readme.txt";       //    TODO: Consider including this at a later step.
//! Description of software, short.
const static char *SOFTWARE_DESCRIPTION  = "A high performance tool for building orthology relations for sets of proteins.";
//const static char *SOFTWARE_DESCRIPTION  = "A high performance tool for building orthology relations.";
///*
//const static char *SOFTWARE_DESCRIPTION_LONG = "An orthology tool for high performance, low memory conumption scalable on multiple cpu's avoiding the memory bottleneck.\n\nProduces a two sets of four files, one for human redability and the other as input for MCL: (1) All filtered relations. (2) The set of inparalogs. (3) The set of orthologs. (4) The set of co-orthologs.\n\nThe constrolling characters of a blast file is user specified. Setting the correct parameters is mandatory. Using symbols habing specific meaning on the terminal, like | (pipe or ' ' (space) as seperator there require a '\' (dash).\n";
// The output of OrthoMCL step 7 can be used to feed OrthaGogue and the output of OrthaGogue could be piped into OrthoMCL step 12 if desired.
//! Description of software, long.
const static char *SOFTWARE_DESCRIPTION_LONG = "A tool for elucidating putative orthology relations for a set of proteins on the basis of sequence similarity, designed for high performance and low memory consumption. Functionally, the program is very similar to  the core of the popular utility OrthoMCL (Steps 8-11, SEE ALSO below), computationally the most demanding part of the OrthoMCL pipeline. The differences are detailed below. The input is a BLAST output file in the tabular format (-m 8). The headers in the FASTA file used for BLAST should contain two mandatory fields, taxon ID and protein ID, in an arbitrary position within the header separated by an arbitrary delimiter. Unix special characters are not allowed in the IDs. The program can be run in two modes which differ with respect to the values used as similarity measures. In the default mode the e-values in the column 11 of BLAST output are used as in OrthoMCL, albeit with an important difference. - In case of multiple hits for a given pair of proteins <<all>> of them are used for computing the score to provide a more accurate estimate of similarity. In the alternative mode (with the option -lc) the score values in the column 12 of BLAST output are used to circumvent the problem with the '0.0' e-values generated by BLAST, which effectively conceal a lot of variation in the similarity. This mode is experimental. \n \t On the basis of the similarity values, the program computes three groups of relations in the input protein set: orthologues, inparalogues and co-orthologues. The definition of these relations is the same as in OrthoMCL. OrthaGogue provides an option (-nii) to exclude the relations between inparalogues of orthologue pairs from the set of co-orthologues. With this option a pair of ortholgues is less likely to be split by MCL between two different clusters (alas, happens routinely). \n \t The program produces  files in two valid MCL formats (SEE ALSO below): 1. native matrix  (all.mci, orthologs.mci, inparalogs.mci, coorthologs.mci) 2. list of pairwise similarity values (all.abc, orthologs.abc, inparalogs.abc, coorthologs.abc). The file proteins.map contains the mapping between the protein indexes used in the *.mci files and the protein labels used in the *.abc files. Bear in mind that the clustering generated by MCL is, for unknown reasons, format dependent. OrthoMCL v.1 uses deprecated MCL formats, OrthoMCL v.2 uses the second format.";
  //"The program can be run in two modes which differ with respect to the values used as similarity measures. In the default mode the e-values in the column 11 of BLAST output are used as in OrthoMCL, albeit with an impo"
  //The program can be run in two modes which differ with respect to the values used as similarity measures. In the default mode the e-values in the column 11 of BLAST output are used as in OrthoMCL, albeit with an impo";
//const static char *SOFTWARE_DESCRIPTION  = "A software for filtering ortholog relations from a FASTA (BLAST) file format.";
//const static char *SOFTWARE_DESCRIPTION_LONG = "Builds a list of orthologs, co-orthologs and inparalogs, using parallel computation og a single core system. The result is stored in textfiles of the mcl- and abc type.";
//! Requirements of the software
const static char *SOFTWARE_REQUIREMENTS = "Unix operating system, IntelTBB library, cmph library.";
//const static char *SOFTWARE_AVAILABILITY = "Tested on linux Read Hat system, but assumed to be able running on most systems of UNIX flavour. Questions regarding this to be forwarded to the author.";
//! Availability of the software
const static char *SOFTWARE_AVAILABILITY = "Available as a C++ library. Tested on CentOS 5.3 only. Contact the author in case of troubles with other UNIX systems.";
//! Default name of the man page.
const static char *SOFTWARE_NAME_MAN_PAGE = "~/man.orthAgogue.txt";
//! Intro with regard to the software examples
const static char *SOFTWARE_EXAMPLES_INTRO ="The examples below assume that the path to the library is included in $PATH.\n";
//! List of the software examples
const static char *SOFTWARE_EXAMPLES = ".B orthAgogue\n Prints the help.\n\n.B orthAgogue -i all.blast\n Default parameters, OrthoMCL v.2 style (FASTA headers like 'spombe|cdc2').\n\n.B orthAgogue -i all.blast -s _ -p 0 -t 1\n In the input file the protein and taxon labels are found in the fields zero and one respectively (field counting starts at zero) separated by an underscore (e.g. 'CDK1_HUMAN').\n\n.B orthAgogue -i all.blast -e 10\n Set the e-value threshold to '1e-10'.\n\n.B orthAgogue -i all.blast -o 50 -lc -e 100\n Set the overlap threshold to '50 percent' and the similarity score to '100' in the alternative mode";// to '100'\n\n";
//"B orthAgogue -i .all.blast -s _ -p 0 -t 1\n Uses the file \"all.blast\" as input where the protein label is found in column one, and the taxon label is found in the second column. (Counting starts from zero).\n\n.B orthAgogue -i all.blast -s _ -p 0 -t 1 -e 100 -nABC\n Do not use normalization value of the abc output. Set the similarity threshold to 100. \n\n.BorthAgogue -i old_all.blast -s \\| -p 1 -t 0 -o 100\n Use a '|' pipe as a seperator between the taxon- and protein label\n";
//! Information about the software license
const static char *SOFTWARE_COPYRIGHT = "Copyright @ 2011 Free Software Foundation, Inc.  License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.  There is NO WARRANTY, to the extent permitted by law.";
//! Where to go in order to get further details
const static char *SOFTWARE_SEE_ALSO = "The OrthoMCL algorithm is described at http/www.orthomcl.orcommodownloadsoftwarv2.UserGuide.txt. The  valid  file formats for the MCL graph clustering utility are specified at http/www.micans.ormcmamcxio.html.";
//const static char *SOFTWARE_SEE_ALSO = "The valid file formats for the MCL graph clustering utilityare specified at http/www.micans.ormcmamcxio.html";//"The MCL output format is specified at \n.I http://www.micans.org/mcl/man/mcxio.html\".";
//*/

//! Prints out the variables set. By default deactivated.
static void print_cmd_constants() {
  if(false) {
    printf("program_name = %s", PROGRAM_NAME);
    printf(", developer_name = %s", DEVELOPER_NAME);
    printf(", developer_company = %s", DEVELOPER_COMPANY);
    printf(", developer_email = %s", DEVELOPER_EMAIL);
    //    printf(", readme_file = %s", README_FILE);
    printf(", software_description = %s", SOFTWARE_DESCRIPTION);
    printf(", software_description_long = %s", SOFTWARE_DESCRIPTION_LONG);
    printf(", software_requirements = %s", SOFTWARE_REQUIREMENTS);
    printf(", software_availability = %s", SOFTWARE_AVAILABILITY);
    printf(", software_name_man_page = %s", SOFTWARE_NAME_MAN_PAGE);
    printf(", software_examples = %s", SOFTWARE_EXAMPLES);
    printf(", software_examples_intro = %s", SOFTWARE_EXAMPLES_INTRO);
    printf(", software_copyright = %s", SOFTWARE_COPYRIGHT);
    printf(", software_see_also = %s", SOFTWARE_SEE_ALSO);
    //    printf(", software_ = %s", SOFTWARE_);
    
    printf("\n");
  }
}

// \}
#endif