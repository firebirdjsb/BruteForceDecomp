/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43A1A5CF6387E85FCA07CC8DE3E5D890BC028ABA311413944598652A40A38471
 * Entry: 0x000fd230, Ghidra index: 3162, label: FUN_000fd230
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
extern uint32_t DAT_0046cfdc;
extern uint32_t PTR_FUN_0039e2d0;
bool FUN_000fd230(void)

{
  int *piVar1;
  byte bVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 == (int *)0x0) {
    return false;
  }
  piVar3 = (int *)FUN_002ea01d(0x7c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_000ee640();
    *piVar3 = (int)&PTR_FUN_0039e2d0;
    piVar3[0x1a] = 0;
    piVar3[0x1b] = 0;
    piVar3[0x1c] = 0;
    piVar3[0x1e] = 0;
    piVar3[0x1d] = 0;
    *(byte *)(piVar3 + 0x18) = *(byte *)(piVar3 + 0x18) & 0xf8;
  }
  piVar3[9] = *piVar1;
  (**(code **)(*piVar3 + 0x2c))();
  if (piVar1[5] == 0x1a6fe169) {
    DAT_0046cfdc = DAT_0046cfdc * 0x19660d + 0x3c6ef35f;
    FUN_00074fb0();
  }
  else {
    for (uVar5 = 0; (piVar1[2] != 0 && (uVar5 < (uint)(piVar1[3] - piVar1[2] >> 2)));
        uVar5 = uVar5 + 1) {
      FUN_00074fb0();
    }
  }
  bVar2 = *(byte *)(piVar3 + 0x18) ^ ((char)piVar1[6] << 2 ^ *(byte *)(piVar3 + 0x18)) & 4;
  *(byte *)(piVar3 + 0x18) = bVar2;
  *(byte *)(piVar3 + 0x18) = (*(char *)((int)piVar1 + 0x19) << 1 ^ bVar2) & 2 ^ bVar2;
  iVar4 = FUN_000ff9e0(piVar3);
  return iVar4 != -1;
}
