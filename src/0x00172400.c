/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CE405390F951B993A09ABB38B9B1A6371FF1F658A9FA538F11A891848B9C404
 * Entry: 0x00172400, Ghidra index: 4864, label: FUN_00172400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00172400(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 0:
    *(undefined4 *)(in_EAX + 0x1c) = 0xf9d40e62;
    *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xfe;
    return;
  case 1:
    *(undefined4 *)(in_EAX + 0x1c) = 0xef2532de;
    *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xfe;
    return;
  case 2:
    *(undefined4 *)(in_EAX + 0x1c) = 0xea20ad9;
    *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) & 0xfe;
    return;
  case 3:
    *(undefined4 *)(in_EAX + 0x1c) = 0xf9d40e62;
    *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) | 1;
    return;
  case 4:
    *(undefined4 *)(in_EAX + 0x1c) = 0xef2532de;
    *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) | 1;
    return;
  case 5:
    *(undefined4 *)(in_EAX + 0x1c) = 0xea20ad9;
    *(byte *)(in_EAX + 0x24) = *(byte *)(in_EAX + 0x24) | 1;
  }
  return;
}
