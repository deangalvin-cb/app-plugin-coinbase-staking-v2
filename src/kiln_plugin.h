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

#include <string.h>

#include "eth_plugin_interface.h"
#include "cx.h"
#include <ctype.h>

#define PLUGIN_NAME "CoinbaseStaking"

// ****************************************************************************
// * SUPPORTED SELECTORS
// ****************************************************************************

// Available selectors:
//
// V2 selectors
// --- 1. stake()
// --- 2. requestExit(shares_amount)
// --- 3. multiClaim(exit_queues, ticket_ids, cask_ids)
// --- 4. claim(uint256[],uint32[],uint16)
//
#define NUM_SELECTORS 4
extern const uint32_t KILN_SELECTORS[NUM_SELECTORS];

// Selectors available (see mapping above).
typedef enum {
    KILN_V2_STAKE = 0,
    KILN_V2_REQUEST_EXIT,
    KILN_V2_MULTICLAIM,
    KILN_V2_CLAIM,
} selector_t;

// ****************************************************************************
// * SHARED PLUGIN CONTEXT MEMORY
// ****************************************************************************

typedef struct context_t {
    uint8_t next_param;

    selector_t selectorIndex;
} context_t;

_Static_assert(sizeof(context_t) <= 5 * 32, "Structure of parameters too big.");
