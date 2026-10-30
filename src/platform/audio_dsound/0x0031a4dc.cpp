/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E6D48D2A2D3C6F90C881689EE072BD9CE4F1BA40E0B10DA1161F1D15BC7FDA4
 * Entry: 0x0031a4dc, Ghidra index: 12258, label: FUN_0031a4dc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386aa0;
extern uint32_t PTR_LAB_003869e0;
extern uint32_t PTR_LAB_00386aac;
void FUN_0031a4dc(void)

{
  int iVar1;
  undefined4 *in_ECX;
  uint uVar2;
  int iVar3;
  
  in_ECX[-1] = PTR_LAB_00386aac;
  *in_ECX = PTR_FUN_00386aa0;
  FUN_0031a689(in_ECX + -1);
  if (in_ECX[0xf] != 0) {
    uVar2 = 0;
    if (in_ECX[6] != 0) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(in_ECX[0xf] + 0x10 + iVar3);
        if (iVar1 != 0) {
          XAPILIB__CloseHandle(iVar1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x30;
      } while (uVar2 < (uint)in_ECX[6]);
    }
    if (in_ECX[0xf] != 0) {
      FUN_00314937(in_ECX[0xf]);
      in_ECX[0xf] = 0;
    }
  }
  thunk_FUN_00314a29();
  *(undefined ***)(-(uint)(in_ECX != (undefined4 *)0x4) & (uint)in_ECX) = &PTR_LAB_003869e0;
  return;
}
