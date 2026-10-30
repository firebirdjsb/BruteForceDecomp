/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 911A766CF78A43154D14195066C433968C812FA466062FBFC662EC4CA37592B1
 * Entry: 0x0023a890, Ghidra index: 7903, label: FUN_0023a890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0023a890(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  /* XBE 0x0023A890 reserves 8 bytes. After saving EBX/ESI,
   * 0x0023A895 addresses [ESP+8] (first DWORD, entry ESP-8),
   * 0x0023A8D0 addresses [ESP+0xC] (second DWORD, entry ESP-4).
   * Only the first DWORD is zeroed by 0x0023A8A4. The second is
   * passed as an output address without any prior initialization.
   * This is guest stack storage, NOT a reconstructed register ABI.
   * TODO: translate guest32 addresses before native host dereferences. */
  int32_t local_8 [2];
  _Static_assert(sizeof(local_8) == 8, "original two-DWORD guest local frame");
  _Static_assert(sizeof(local_8[0]) == 4, "original 32-bit guest word");

  local_8[0] = 0;
  iVar1 = (**(code **)*unaff_EDI)();
  if (iVar1 < 0) {
    if (local_8[0] != 0) {
      /* XBE 0x0023A8C0-0x0023A8C3: virtual release at vtable +8. */
      (**(code **)(*(int *)(uintptr_t)(uint32_t)local_8[0] + 8))(local_8[0]);
    }
    return iVar1;
  }
  else {
    piVar2 = (int *)(**(code **)(local_8[0] + 0xc))(local_8,&local_8[1]);
    if (*piVar2 != unaff_ESI) {
      if (local_8[0] != 0) {
        /* XBE 0x0023A8E9-0x0023A8EC releases the first output object. */
        (**(code **)(*(int *)(uintptr_t)(uint32_t)local_8[0] + 8))(local_8[0]);
      }
      return -0x7fffbffb;
    }
    iVar1 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,unaff_EBX);
    if (iVar1 < 0) {
      if (local_8[0] != 0) {
        /* XBE 0x0023A913-0x0023A916 releases the first output object. */
        (**(code **)(*(int *)(uintptr_t)(uint32_t)local_8[0] + 8))(local_8[0]);
      }
      return -0x7fffbffb;
    }
    (**(code **)(*unaff_EDI + 0x18))();
    (**(code **)(*in_EAX + 0x18))();
    iVar1 = (**(code **)(*unaff_EDI + 0x24))();
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_EDI + 0x28))();
    }
    FUN_00239dc0();
    if (local_8[0] != 0) {
      /* XBE 0x0023A94F-0x0023A95A: success also releases this object.
       * Guest32 address-to-host translation is NOT yet implemented. */
      (**(code **)(*(int *)(uintptr_t)(uint32_t)local_8[0] + 8))(local_8[0]);
    }
  }
  return iVar1;
}