/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD43B4DB29657BBA208C6A04875ACE27187116986644CFC04BBD0AAC28FC4610
 * Entry: 0x00058530, Ghidra index: 869, label: FUN_00058530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a4024;
void FUN_00058530(void)

{
  undefined4 *in_EAX;
  
  /* XBE 0x00058533: MOV m32,0x003a4024 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  in_EAX[10] = UINT32_C(0x003a4024);
  in_EAX[0xd] = 0;
  in_EAX[0xb] = 0;
  *(byte *)(in_EAX + 0xc) = *(byte *)(in_EAX + 0xc) & 0xfa | 2;
  in_EAX[2] = 0;
  in_EAX[1] = 1;
  in_EAX[8] = 0x3f800000;
  in_EAX[9] = 0xbf800000;
  in_EAX[3] = 0x404ccccd;
  in_EAX[4] = 0x40c00000;
  *in_EAX = 1;
  in_EAX[0xd] = 0x3e99999a;
  in_EAX[0xb] = 0x3e99999a;
  *(byte *)(in_EAX + 0xc) = *(byte *)(in_EAX + 0xc) & 0xf9 | 1;
  return;
}
