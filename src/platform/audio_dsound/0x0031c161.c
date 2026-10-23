/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34CB99D9DFDAEB09A85A826FE6C0BB0774D32860600D0D0BBD578D745C6B8862
 * Entry: 0x0031c161, Ghidra index: 12325, label: FUN_0031c161
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f784;
void FUN_0031c161(byte param_1,byte param_2,int param_3,int param_4)

{
  byte bVar1;
  int *in_ECX;
  
  FUN_003118f0();
  if (param_2 == 0) {
    param_1 = 0;
    bVar1 = 0;
  }
  else {
    bVar1 = (param_1 + param_2) - 1;
    if ((*(byte *)(in_ECX + 3) & 1) == 0) {
      param_1 = (byte)((ulonglong)param_1 % (ulonglong)(longlong)(int)(uint)param_2);
      bVar1 = (byte)((ulonglong)bVar1 % (ulonglong)(longlong)(int)(uint)param_2);
    }
    else {
      param_1 = param_1 & 0x1f;
      bVar1 = bVar1 & 0x1f;
    }
  }
  if (param_3 != 0) {
    *(byte *)((&DAT_0032f784)[*in_ECX] + -0x13ffefc) = param_1;
  }
  if (param_4 != 0) {
    *(byte *)((&DAT_0032f784)[*in_ECX] + -0x13ffefb) = bVar1;
  }
  *(byte *)((int)in_ECX + 0x25) = param_1;
  *(byte *)(in_ECX + 9) = param_2;
  FUN_00311923();
  return;
}
