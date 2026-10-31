# 27 source-matched C++17 direct calls — 2026-10-31

**Evidence boundary:** original retail XBE SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721` authenticated outside the repository. The completed exact-tree Clang++17 audit at `5395668b4ae3dcc6897b38faae30860a9342a6ab` recorded a single undeclared-identifier error for each caller. A compare against starting `main` `b71c2c6e087f073ec946b0c5551fbaf72420a4c0` showed none of these 27 files changed since that audit.

Each original caller's contiguous machine-code body matched its recorded SHA-256; each listed original E8 opcode decoded to the specified callee, with a modified displacement rejected as a negative control. Sixteen of 27 callee-body checks also matched contiguous original bytes; other callee bodies require control-flow-range reconstruction. Observed RET sites are not an exhaustive callee-exit proof.

| Caller | Original E8 VA | Original destination | Draft-only return declaration |
|---|---|---|---|
| `0x0015e1a0` | `0x0015e1b6` | `0x0010bc40` | `void FUN_0010bc40(void)` |
| `0x001656b0` | `0x00165717` | `0x00164ed0` | `void FUN_00164ed0(void)` |
| `0x00169650` | `0x001696b5` | `0x001546b0` | `undefined4 FUN_001546b0(void)` |
| `0x00180960` | `0x00180987` | `0x001834c0` | `void FUN_001834c0(void)` |
| `0x00189360` | `0x00189365` | `0x001a68c0` | `void FUN_001a68c0(void)` |
| `0x00189660` | `0x00189665` | `0x001a6960` | `void FUN_001a6960(void)` |
| `0x001897d0` | `0x001897d5` | `0x001a69b0` | `void FUN_001a69b0(void)` |
| `0x0018a1c0` | `0x0018a1c5` | `0x001a6a50` | `void FUN_001a6a50(void)` |
| `0x0018c740` | `0x0018c745` | `0x001a6c30` | `void FUN_001a6c30(void)` |
| `0x0018cb80` | `0x0018cb85` | `0x001a6cd0` | `void FUN_001a6cd0(void)` |
| `0x002228b0` | `0x002228bd` | `0x002228d0` | `void FUN_002228d0(void)` |
| `0x00222e40` | `0x00222e47` | `0x00222e50` | `void FUN_00222e50(void)` |
| `0x00229950` | `0x00229967` | `0x002b2e00` | `undefined4 FUN_002b2e00(void)` |
| `0x00235bd0` | `0x00235bf1` | `0x00253570` | `undefined4 FUN_00253570(void)` |
| `0x0023ed90` | `0x0023ed95` | `0x00240f00` | `void FUN_00240f00(void)` |
| `0x00241290` | `0x002412a7` | `0x00242410` | `void FUN_00242410(void)` |
| `0x002412b0` | `0x002412c6` | `0x00242330` | `void FUN_00242330(void)` |
| `0x002412d0` | `0x002412e7` | `0x002423a0` | `void FUN_002423a0(void)` |
| `0x002416f0` | `0x00241706` | `0x00242c80` | `void FUN_00242c80(void)` |
| `0x00243540` | `0x00243549` | `0x00242fd0` | `void FUN_00242fd0(void)` |
| `0x002440c0` | `0x002440c7` | `0x002430a0` | `void FUN_002430a0(void)` |
| `0x002526f0` | `0x0025271e` | `0x0027e7f0` | `void FUN_0027e7f0(void)` |
| `0x0025c0e0` | `0x0025c0e8` | `0x0025c100` | `undefined4 FUN_0025c100(void)` |
| `0x00270e50` | `0x00270e5b` | `0x002713d0` | `void FUN_002713d0(void)` |
| `0x00270ef0` | `0x00270efb` | `0x002713d0` | `void FUN_002713d0(void)` |
| `0x00272340` | `0x002723b1` | `0x002723c0` | `void FUN_002723c0(void)` |
| `0x002830d0` | `0x002830fa` | `0x00239dc0` | `undefined4 FUN_00239dc0(void)` |

**Not established:** complete register producer and guest stack inputs, all return/output paths, x87/SSE/SEH semantics, class/vtable dispatch, native linkage, or 1:1 behavior. The inserted `extern` declarations only reproduce existing *source* callee signatures; a host `void` parameter list does not prove an original Xbox no-argument ABI. No original call expression, instruction/body label, guest pointer representation, or gameplay operation was changed.

Regression: `python3 -m unittest discover -s tools -p 'test_cpp_20261031_27_source_matched_calls.py' -v`. For private XBE verification: `python3 tools/test_cpp_20261031_27_source_matched_calls.py --xbe /path/to/default.xbe`. Never commit the executable.
