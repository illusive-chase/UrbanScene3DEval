#include "evaluate_model.h"
#include <iostream>

int
main(int argc, char *argv[])
{
    if (argc != 3) return 1;
    auto em = EvaluateModel();
    em.if_write_error_file = false;
    em.read_gt_model(argv[1]);
    em.read_recon_model(argv[2]);
    em.evaluate();
    return 0;
}