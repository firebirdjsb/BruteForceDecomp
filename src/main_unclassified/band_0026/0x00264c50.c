/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3DAACE01E59AF03B2CA55DB68C649FA860AFC65253AE68DA968029292E59E09
 * Entry: 0x00264c50, Ghidra index: 8713, label: FUN_00264c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b22c;
int FUN_00264c50(void)

{
  int in_EAX;
  int iVar1;
  uint in_ECX;
  int in_EDX;
  undefined *puStack_14;
  
  *(int *)(in_EDX + 0x3c) = in_EAX;
  if (-1 < in_EAX) {
    puStack_14 = &DAT_0046b22c;
    RtlEnterCriticalSection();
    (**(code **)(**(int **)(in_EDX + 0x48) + 0x18))(*(int **)(in_EDX + 0x48),&stack0xfffffff4);
    *(uint *)(in_EDX + 0x14) = *(int *)(in_EDX + 0x14) + in_ECX;
    if (*(uint *)(in_EDX + 0x18) < in_ECX) {
      *(undefined4 *)(in_EDX + 0x18) = 0;
    }
    else {
      *(uint *)(in_EDX + 0x18) = *(uint *)(in_EDX + 0x18) - in_ECX;
    }
    iVar1 = FUN_00264b30(in_EDX);
    if (iVar1 < 0) {
      RtlLeaveCriticalSection(&DAT_0046b22c);
      return iVar1;
    }
    (**(code **)(**(int **)(in_EDX + 0x48) + 0x14))(*(int **)(in_EDX + 0x48),&puStack_14);
    in_EAX = FUN_00264a50();
    RtlLeaveCriticalSection(&DAT_0046b22c);
  }
  return in_EAX;
}
