/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5760FA30D8BFA71FB774F96A37BB9F01258B4DF7596F013C2FDA09C13554698F
 * Entry: 0x002e4060, Ghidra index: 10429, label: FUN_002e4060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e4060(undefined1 param_1)

{
  int iVar1;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [400];
  
  local_198 = 0;
  local_194 = 0;
  local_19c = (uint)CONCAT11(param_1,0xc);
  iVar1 = XONLINES__XNetStartup(&local_19c);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  iVar1 = XONLINES__WSAStartup(0x202,local_190);
  return -(uint)(iVar1 != 0) & 0x80004005;
}
