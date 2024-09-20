/*******************************************************************************
 *
 * ██╗  ██╗██╗██╗     ███╗   ██╗
 * ██║ ██╔╝██║██║     ████╗  ██║
 * █████╔╝ ██║██║     ██╔██╗ ██║
 * ██╔═██╗ ██║██║     ██║╚██╗██║
 * ██║  ██╗██║███████╗██║ ╚████║
 * ╚═╝  ╚═╝╚═╝╚══════╝╚═╝  ╚═══╝
 *
 * Kiln Ethereum Ledger App
 * (c) 2022-2024 Kiln
 *
 * contact@kiln.fi
 ********************************************************************************/

#pragma once

#include <ctype.h>
#include <stdbool.h>

#include "kiln_plugin.h"

// On-Chain v2 UI
bool stake_in_pool_ui(ethQueryContractUI_t *msg);
bool request_pooling_exit_ui(ethQueryContractUI_t *msg);
bool request_exit_ui(ethQueryContractUI_t *msg);
bool multiclaim_ui(ethQueryContractUI_t *msg);
bool claim_ui(ethQueryContractUI_t *msg);
