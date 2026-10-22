/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 803FB23A2A0CD428A97F0F08BFFAA4BB7AB190734BB736449A632DEBE6CB517F
 * Entry: 0x002eaefa, Ghidra index: 10605, label: FUN_002eaefa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002eaefa(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  undefined4 local_18;
  
  local_18 = 0x49;
  local_1c = param_1;
  local_24 = param_1;
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  local_20 = (int)param_1 - (int)pcVar1;
  FUN_002ee515(&local_24,param_2,&stack0x0000000c);
  return;
}
