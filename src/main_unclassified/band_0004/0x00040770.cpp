/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 928539FBC40D1D1A4DF71C6D1DA3CED7DCD6FE77D38BE547E9608F6B0BA8C90B
 * Entry: 0x00040770, Ghidra index: 483, label: FUN_00040770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_00140a60(int param_1,int *param_2);

undefined4 FUN_00040770(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_000120f0();
  if ((*(byte *)(*(int *)(iVar1 + 0xc) + 0x1a8) & 2) != 0) {
    *(undefined1 *)(in_ECX + 0x874) = 0;
    *(undefined4 *)(in_ECX + 0x878) = 0x1b;
    *(undefined4 *)(in_ECX + 0x870) = 0;
    *(undefined4 *)(in_ECX + 0x880) = 4;
    FUN_00140a60(*(undefined4 *)(*(int *)(iVar1 + 8) + 0xbe8),iVar1,0xf0c2990c,0);
    return 1;
  }
  return 0;
}
