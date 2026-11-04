/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE50B1A6A45623681DC8F43BC3BDB3122601E6A432FD6201050B57AE92A1D3DA
 * Entry: 0x000fd870, Ghidra index: 3170, label: FUN_000fd870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D allocation boundary takes one guest32 size and
 * returns guest32 EAX. No host allocation/pointer ABI is established. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int FUN_000fd870(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int local_8;
  
  piVar1 = *(int **)(in_ECX + 8);
  local_8 = 0;
  for (piVar4 = *(int **)(in_ECX + 4); piVar4 != piVar1; piVar4 = piVar4 + 0xf) {
    iVar2 = FUN_002ea01d(0x248);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0010cbf0(iVar2);
    }
    iVar2 = piVar4[2];
    piVar3[3] = piVar4[1];
    piVar3[4] = iVar2;
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[5] = piVar4[3];
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[6] = piVar4[4];
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[9] = *piVar4;
    (**(code **)(*piVar3 + 0x2c))();
    if (piVar4[5] != 0) {
      FUN_000fbf20(piVar4[5]);
    }
    iVar2 = piVar4[0xc];
    for (iVar5 = piVar4[0xb]; iVar5 != iVar2; iVar5 = iVar5 + 4) {
      FUN_0010cde0(piVar3,iVar5);
    }
    FUN_001e97c0();
    FUN_0010a7d0();
    if (piVar3[0x5e] == DAT_0046d064) {
      piVar3[0x5e] = piVar4[0xe];
      (**(code **)(piVar3[0x55] + 0x2c))();
    }
    (**(code **)(*piVar3 + 0x1c))();
    iVar2 = FUN_000ff9e0(piVar3);
    if (iVar2 != -1) {
      FUN_000fbd40();
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}
