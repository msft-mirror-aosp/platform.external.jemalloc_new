#define a0dalloc JEMALLOC_N(a0dalloc)
#define a0malloc JEMALLOC_N(a0malloc)
#define arena_choose_hard JEMALLOC_N(arena_choose_hard)
#define arena_cleanup JEMALLOC_N(arena_cleanup)
#define arena_init JEMALLOC_N(arena_init)
#define arena_migrate JEMALLOC_N(arena_migrate)
#define arenas JEMALLOC_N(arenas)
#define arena_set JEMALLOC_N(arena_set)
#define arenas_lock JEMALLOC_N(arenas_lock)
#define arenas_tdata_cleanup JEMALLOC_N(arenas_tdata_cleanup)
#define arena_tdata_get_hard JEMALLOC_N(arena_tdata_get_hard)
#define bootstrap_calloc JEMALLOC_N(bootstrap_calloc)
#define bootstrap_free JEMALLOC_N(bootstrap_free)
#define bootstrap_malloc JEMALLOC_N(bootstrap_malloc)
#define iarena_cleanup JEMALLOC_N(iarena_cleanup)
#define jemalloc_postfork_child JEMALLOC_N(jemalloc_postfork_child)
#define jemalloc_postfork_parent JEMALLOC_N(jemalloc_postfork_parent)
#define jemalloc_prefork JEMALLOC_N(jemalloc_prefork)
#define malloc_initialized JEMALLOC_N(malloc_initialized)
#define malloc_slow JEMALLOC_N(malloc_slow)
#define narenas_auto JEMALLOC_N(narenas_auto)
#define narenas_total_get JEMALLOC_N(narenas_total_get)
#define ncpus JEMALLOC_N(ncpus)
#define opt_abort JEMALLOC_N(opt_abort)
#define opt_abort_conf JEMALLOC_N(opt_abort_conf)
#define opt_junk JEMALLOC_N(opt_junk)
#define opt_junk_alloc JEMALLOC_N(opt_junk_alloc)
#define opt_junk_free JEMALLOC_N(opt_junk_free)
#define opt_narenas JEMALLOC_N(opt_narenas)
#define opt_utrace JEMALLOC_N(opt_utrace)
#define opt_xmalloc JEMALLOC_N(opt_xmalloc)
#define opt_zero JEMALLOC_N(opt_zero)
#define arena_alloc_junk_small JEMALLOC_N(arena_alloc_junk_small)
#define arena_basic_stats_merge JEMALLOC_N(arena_basic_stats_merge)
#define arena_boot JEMALLOC_N(arena_boot)
#define arena_dalloc_bin_junked_locked JEMALLOC_N(arena_dalloc_bin_junked_locked)
#define arena_dalloc_junk_small JEMALLOC_N(arena_dalloc_junk_small)
#define arena_dalloc_promoted JEMALLOC_N(arena_dalloc_promoted)
#define arena_dalloc_small JEMALLOC_N(arena_dalloc_small)
#define arena_decay JEMALLOC_N(arena_decay)
#define arena_destroy JEMALLOC_N(arena_destroy)
#define arena_dirty_decay_ms_default_get JEMALLOC_N(arena_dirty_decay_ms_default_get)
#define arena_dirty_decay_ms_default_set JEMALLOC_N(arena_dirty_decay_ms_default_set)
#define arena_dirty_decay_ms_get JEMALLOC_N(arena_dirty_decay_ms_get)
#define arena_dirty_decay_ms_set JEMALLOC_N(arena_dirty_decay_ms_set)
#define arena_dss_prec_get JEMALLOC_N(arena_dss_prec_get)
#define arena_dss_prec_set JEMALLOC_N(arena_dss_prec_set)
#define arena_extent_alloc_large JEMALLOC_N(arena_extent_alloc_large)
#define arena_extent_dalloc_large_prep JEMALLOC_N(arena_extent_dalloc_large_prep)
#define arena_extent_ralloc_large_expand JEMALLOC_N(arena_extent_ralloc_large_expand)
#define arena_extent_ralloc_large_shrink JEMALLOC_N(arena_extent_ralloc_large_shrink)
#define arena_extents_dirty_dalloc JEMALLOC_N(arena_extents_dirty_dalloc)
#define arena_extent_sn_next JEMALLOC_N(arena_extent_sn_next)
#define arena_malloc_hard JEMALLOC_N(arena_malloc_hard)
#define arena_muzzy_decay_ms_default_get JEMALLOC_N(arena_muzzy_decay_ms_default_get)
#define arena_muzzy_decay_ms_default_set JEMALLOC_N(arena_muzzy_decay_ms_default_set)
#define arena_muzzy_decay_ms_get JEMALLOC_N(arena_muzzy_decay_ms_get)
#define arena_muzzy_decay_ms_set JEMALLOC_N(arena_muzzy_decay_ms_set)
#define arena_new JEMALLOC_N(arena_new)
#define arena_nthreads_dec JEMALLOC_N(arena_nthreads_dec)
#define arena_nthreads_get JEMALLOC_N(arena_nthreads_get)
#define arena_nthreads_inc JEMALLOC_N(arena_nthreads_inc)
#define arena_palloc JEMALLOC_N(arena_palloc)
#define arena_postfork_child JEMALLOC_N(arena_postfork_child)
#define arena_postfork_parent JEMALLOC_N(arena_postfork_parent)
#define arena_prefork0 JEMALLOC_N(arena_prefork0)
#define arena_prefork1 JEMALLOC_N(arena_prefork1)
#define arena_prefork2 JEMALLOC_N(arena_prefork2)
#define arena_prefork3 JEMALLOC_N(arena_prefork3)
#define arena_prefork4 JEMALLOC_N(arena_prefork4)
#define arena_prefork5 JEMALLOC_N(arena_prefork5)
#define arena_prefork6 JEMALLOC_N(arena_prefork6)
#define arena_prefork7 JEMALLOC_N(arena_prefork7)
#define arena_prof_promote JEMALLOC_N(arena_prof_promote)
#define arena_ralloc JEMALLOC_N(arena_ralloc)
#define arena_ralloc_no_move JEMALLOC_N(arena_ralloc_no_move)
#define arena_reset JEMALLOC_N(arena_reset)
#define arena_retain_grow_limit_get_set JEMALLOC_N(arena_retain_grow_limit_get_set)
#define arena_slab_regind JEMALLOC_N(arena_slab_regind)
#define arena_stats_merge JEMALLOC_N(arena_stats_merge)
#define arena_tcache_fill_small JEMALLOC_N(arena_tcache_fill_small)
#define h_steps JEMALLOC_N(h_steps)
#define opt_dirty_decay_ms JEMALLOC_N(opt_dirty_decay_ms)
#define opt_muzzy_decay_ms JEMALLOC_N(opt_muzzy_decay_ms)
#define opt_percpu_arena JEMALLOC_N(opt_percpu_arena)
#define percpu_arena_mode_names JEMALLOC_N(percpu_arena_mode_names)
#define background_thread_boot0 JEMALLOC_N(background_thread_boot0)
#define background_thread_boot1 JEMALLOC_N(background_thread_boot1)
#define background_thread_create JEMALLOC_N(background_thread_create)
#define background_thread_ctl_init JEMALLOC_N(background_thread_ctl_init)
#define background_thread_enabled_state JEMALLOC_N(background_thread_enabled_state)
#define background_thread_info JEMALLOC_N(background_thread_info)
#define background_thread_interval_check JEMALLOC_N(background_thread_interval_check)
#define background_thread_lock JEMALLOC_N(background_thread_lock)
#define background_thread_postfork_child JEMALLOC_N(background_thread_postfork_child)
#define background_thread_postfork_parent JEMALLOC_N(background_thread_postfork_parent)
#define background_thread_prefork0 JEMALLOC_N(background_thread_prefork0)
#define background_thread_prefork1 JEMALLOC_N(background_thread_prefork1)
#define background_threads_disable JEMALLOC_N(background_threads_disable)
#define background_threads_enable JEMALLOC_N(background_threads_enable)
#define background_thread_stats_read JEMALLOC_N(background_thread_stats_read)
#define can_enable_background_thread JEMALLOC_N(can_enable_background_thread)
#define max_background_threads JEMALLOC_N(max_background_threads)
#define n_background_threads JEMALLOC_N(n_background_threads)
#define opt_background_thread JEMALLOC_N(opt_background_thread)
#define opt_max_background_threads JEMALLOC_N(opt_max_background_threads)
#define pthread_create_wrapper JEMALLOC_N(pthread_create_wrapper)
#define b0get JEMALLOC_N(b0get)
#define base_alloc JEMALLOC_N(base_alloc)
#define base_alloc_extent JEMALLOC_N(base_alloc_extent)
#define base_boot JEMALLOC_N(base_boot)
#define base_delete JEMALLOC_N(base_delete)
#define base_extent_hooks_get JEMALLOC_N(base_extent_hooks_get)
#define base_extent_hooks_set JEMALLOC_N(base_extent_hooks_set)
#define base_new JEMALLOC_N(base_new)
#define base_postfork_child JEMALLOC_N(base_postfork_child)
#define base_postfork_parent JEMALLOC_N(base_postfork_parent)
#define base_prefork JEMALLOC_N(base_prefork)
#define base_stats_get JEMALLOC_N(base_stats_get)
#define metadata_thp_mode_names JEMALLOC_N(metadata_thp_mode_names)
#define opt_metadata_thp JEMALLOC_N(opt_metadata_thp)
#define bin_infos JEMALLOC_N(bin_infos)
#define bin_init JEMALLOC_N(bin_init)
#define bin_postfork_child JEMALLOC_N(bin_postfork_child)
#define bin_postfork_parent JEMALLOC_N(bin_postfork_parent)
#define bin_prefork JEMALLOC_N(bin_prefork)
#define bitmap_info_init JEMALLOC_N(bitmap_info_init)
#define bitmap_init JEMALLOC_N(bitmap_init)
#define bitmap_size JEMALLOC_N(bitmap_size)
#define ckh_count JEMALLOC_N(ckh_count)
#define ckh_delete JEMALLOC_N(ckh_delete)
#define ckh_insert JEMALLOC_N(ckh_insert)
#define ckh_iter JEMALLOC_N(ckh_iter)
#define ckh_new JEMALLOC_N(ckh_new)
#define ckh_pointer_hash JEMALLOC_N(ckh_pointer_hash)
#define ckh_pointer_keycomp JEMALLOC_N(ckh_pointer_keycomp)
#define ckh_remove JEMALLOC_N(ckh_remove)
#define ckh_search JEMALLOC_N(ckh_search)
#define ckh_string_hash JEMALLOC_N(ckh_string_hash)
#define ckh_string_keycomp JEMALLOC_N(ckh_string_keycomp)
#define ctl_boot JEMALLOC_N(ctl_boot)
#define ctl_bymib JEMALLOC_N(ctl_bymib)
#define ctl_byname JEMALLOC_N(ctl_byname)
#define ctl_nametomib JEMALLOC_N(ctl_nametomib)
#define ctl_postfork_child JEMALLOC_N(ctl_postfork_child)
#define ctl_postfork_parent JEMALLOC_N(ctl_postfork_parent)
#define ctl_prefork JEMALLOC_N(ctl_prefork)
#define div_init JEMALLOC_N(div_init)
#define extent_alloc JEMALLOC_N(extent_alloc)
#define extent_alloc_wrapper JEMALLOC_N(extent_alloc_wrapper)
#define extent_avail_any JEMALLOC_N(extent_avail_any)
#define extent_avail_empty JEMALLOC_N(extent_avail_empty)
#define extent_avail_first JEMALLOC_N(extent_avail_first)
#define extent_avail_insert JEMALLOC_N(extent_avail_insert)
#define extent_avail_new JEMALLOC_N(extent_avail_new)
#define extent_avail_remove JEMALLOC_N(extent_avail_remove)
#define extent_avail_remove_any JEMALLOC_N(extent_avail_remove_any)
#define extent_avail_remove_first JEMALLOC_N(extent_avail_remove_first)
#define extent_boot JEMALLOC_N(extent_boot)
#define extent_postfork_child JEMALLOC_N(extent_postfork_child)
#define extent_commit_wrapper JEMALLOC_N(extent_commit_wrapper)
#define extent_dalloc JEMALLOC_N(extent_dalloc)
#define extent_dalloc_gap JEMALLOC_N(extent_dalloc_gap)
#define extent_dalloc_wrapper JEMALLOC_N(extent_dalloc_wrapper)
#define extent_decommit_wrapper JEMALLOC_N(extent_decommit_wrapper)
#define extent_destroy_wrapper JEMALLOC_N(extent_destroy_wrapper)
#define extent_heap_any JEMALLOC_N(extent_heap_any)
#define extent_heap_empty JEMALLOC_N(extent_heap_empty)
#define extent_heap_first JEMALLOC_N(extent_heap_first)
#define extent_heap_insert JEMALLOC_N(extent_heap_insert)
#define extent_heap_new JEMALLOC_N(extent_heap_new)
#define extent_heap_remove JEMALLOC_N(extent_heap_remove)
#define extent_heap_remove_any JEMALLOC_N(extent_heap_remove_any)
#define extent_heap_remove_first JEMALLOC_N(extent_heap_remove_first)
#define extent_hooks_default JEMALLOC_N(extent_hooks_default)
#define extent_hooks_get JEMALLOC_N(extent_hooks_get)
#define extent_hooks_set JEMALLOC_N(extent_hooks_set)
#define extent_merge_wrapper JEMALLOC_N(extent_merge_wrapper)
#define extent_mutex_pool JEMALLOC_N(extent_mutex_pool)
#define extent_purge_forced_wrapper JEMALLOC_N(extent_purge_forced_wrapper)
#define extent_purge_lazy_wrapper JEMALLOC_N(extent_purge_lazy_wrapper)
#define extents_alloc JEMALLOC_N(extents_alloc)
#define extents_dalloc JEMALLOC_N(extents_dalloc)
#define extents_evict JEMALLOC_N(extents_evict)
#define extents_init JEMALLOC_N(extents_init)
#define extent_size_quantize_ceil JEMALLOC_N(extent_size_quantize_ceil)
#define extent_size_quantize_floor JEMALLOC_N(extent_size_quantize_floor)
#define extents_npages_get JEMALLOC_N(extents_npages_get)
#define extent_split_wrapper JEMALLOC_N(extent_split_wrapper)
#define extents_postfork_child JEMALLOC_N(extents_postfork_child)
#define extents_postfork_parent JEMALLOC_N(extents_postfork_parent)
#define extents_prefork JEMALLOC_N(extents_prefork)
#define extents_rtree JEMALLOC_N(extents_rtree)
#define extents_state_get JEMALLOC_N(extents_state_get)
#define opt_lg_extent_max_active_fit JEMALLOC_N(opt_lg_extent_max_active_fit)
#define dss_prec_names JEMALLOC_N(dss_prec_names)
#define extent_alloc_dss JEMALLOC_N(extent_alloc_dss)
#define extent_dss_boot JEMALLOC_N(extent_dss_boot)
#define extent_dss_mergeable JEMALLOC_N(extent_dss_mergeable)
#define extent_dss_prec_get JEMALLOC_N(extent_dss_prec_get)
#define extent_dss_prec_set JEMALLOC_N(extent_dss_prec_set)
#define extent_in_dss JEMALLOC_N(extent_in_dss)
#define opt_dss JEMALLOC_N(opt_dss)
#define extent_alloc_mmap JEMALLOC_N(extent_alloc_mmap)
#define extent_dalloc_mmap JEMALLOC_N(extent_dalloc_mmap)
#define opt_retain JEMALLOC_N(opt_retain)
#define hooks_arena_new_hook JEMALLOC_N(hooks_arena_new_hook)
#define hooks_libc_hook JEMALLOC_N(hooks_libc_hook)
#define large_dalloc JEMALLOC_N(large_dalloc)
#define large_dalloc_finish JEMALLOC_N(large_dalloc_finish)
#define large_dalloc_junk JEMALLOC_N(large_dalloc_junk)
#define large_dalloc_maybe_junk JEMALLOC_N(large_dalloc_maybe_junk)
#define large_dalloc_prep_junked_locked JEMALLOC_N(large_dalloc_prep_junked_locked)
#define large_malloc JEMALLOC_N(large_malloc)
#define large_palloc JEMALLOC_N(large_palloc)
#define large_prof_tctx_get JEMALLOC_N(large_prof_tctx_get)
#define large_prof_tctx_reset JEMALLOC_N(large_prof_tctx_reset)
#define large_prof_tctx_set JEMALLOC_N(large_prof_tctx_set)
#define large_ralloc JEMALLOC_N(large_ralloc)
#define large_ralloc_no_move JEMALLOC_N(large_ralloc_no_move)
#define large_salloc JEMALLOC_N(large_salloc)
#define log_init_done JEMALLOC_N(log_init_done)
#define log_var_names JEMALLOC_N(log_var_names)
#define log_var_update_state JEMALLOC_N(log_var_update_state)
#define buferror JEMALLOC_N(buferror)
#define malloc_cprintf JEMALLOC_N(malloc_cprintf)
#define malloc_printf JEMALLOC_N(malloc_printf)
#define malloc_snprintf JEMALLOC_N(malloc_snprintf)
#define malloc_strtoumax JEMALLOC_N(malloc_strtoumax)
#define malloc_vcprintf JEMALLOC_N(malloc_vcprintf)
#define malloc_vsnprintf JEMALLOC_N(malloc_vsnprintf)
#define malloc_write JEMALLOC_N(malloc_write)
#define malloc_mutex_boot JEMALLOC_N(malloc_mutex_boot)
#define malloc_mutex_init JEMALLOC_N(malloc_mutex_init)
#define malloc_mutex_lock_slow JEMALLOC_N(malloc_mutex_lock_slow)
#define malloc_mutex_postfork_child JEMALLOC_N(malloc_mutex_postfork_child)
#define malloc_mutex_postfork_parent JEMALLOC_N(malloc_mutex_postfork_parent)
#define malloc_mutex_prefork JEMALLOC_N(malloc_mutex_prefork)
#define malloc_mutex_prof_data_reset JEMALLOC_N(malloc_mutex_prof_data_reset)
#define mutex_pool_init JEMALLOC_N(mutex_pool_init)
#define nstime_add JEMALLOC_N(nstime_add)
#define nstime_compare JEMALLOC_N(nstime_compare)
#define nstime_copy JEMALLOC_N(nstime_copy)
#define nstime_divide JEMALLOC_N(nstime_divide)
#define nstime_iadd JEMALLOC_N(nstime_iadd)
#define nstime_idivide JEMALLOC_N(nstime_idivide)
#define nstime_imultiply JEMALLOC_N(nstime_imultiply)
#define nstime_init JEMALLOC_N(nstime_init)
#define nstime_init2 JEMALLOC_N(nstime_init2)
#define nstime_isubtract JEMALLOC_N(nstime_isubtract)
#define nstime_monotonic JEMALLOC_N(nstime_monotonic)
#define nstime_msec JEMALLOC_N(nstime_msec)
#define nstime_ns JEMALLOC_N(nstime_ns)
#define nstime_nsec JEMALLOC_N(nstime_nsec)
#define nstime_sec JEMALLOC_N(nstime_sec)
#define nstime_subtract JEMALLOC_N(nstime_subtract)
#define nstime_update JEMALLOC_N(nstime_update)
#define init_system_thp_mode JEMALLOC_N(init_system_thp_mode)
#define opt_thp JEMALLOC_N(opt_thp)
#define pages_boot JEMALLOC_N(pages_boot)
#define pages_commit JEMALLOC_N(pages_commit)
#define pages_decommit JEMALLOC_N(pages_decommit)
#define pages_dodump JEMALLOC_N(pages_dodump)
#define pages_dontdump JEMALLOC_N(pages_dontdump)
#define pages_huge JEMALLOC_N(pages_huge)
#define pages_map JEMALLOC_N(pages_map)
#define pages_nohuge JEMALLOC_N(pages_nohuge)
#define pages_purge_forced JEMALLOC_N(pages_purge_forced)
#define pages_purge_lazy JEMALLOC_N(pages_purge_lazy)
#define pages_set_thp_state JEMALLOC_N(pages_set_thp_state)
#define pages_unmap JEMALLOC_N(pages_unmap)
#define thp_mode_names JEMALLOC_N(thp_mode_names)
#define bt2gctx_mtx JEMALLOC_N(bt2gctx_mtx)
#define bt_init JEMALLOC_N(bt_init)
#define lg_prof_sample JEMALLOC_N(lg_prof_sample)
#define opt_lg_prof_interval JEMALLOC_N(opt_lg_prof_interval)
#define opt_lg_prof_sample JEMALLOC_N(opt_lg_prof_sample)
#define opt_prof JEMALLOC_N(opt_prof)
#define opt_prof_accum JEMALLOC_N(opt_prof_accum)
#define opt_prof_active JEMALLOC_N(opt_prof_active)
#define opt_prof_final JEMALLOC_N(opt_prof_final)
#define opt_prof_gdump JEMALLOC_N(opt_prof_gdump)
#define opt_prof_leak JEMALLOC_N(opt_prof_leak)
#define opt_prof_prefix JEMALLOC_N(opt_prof_prefix)
#define opt_prof_thread_active_init JEMALLOC_N(opt_prof_thread_active_init)
#define prof_accum_init JEMALLOC_N(prof_accum_init)
#define prof_active JEMALLOC_N(prof_active)
#define prof_active_get JEMALLOC_N(prof_active_get)
#define prof_active_set JEMALLOC_N(prof_active_set)
#define prof_alloc_rollback JEMALLOC_N(prof_alloc_rollback)
#define prof_backtrace JEMALLOC_N(prof_backtrace)
#define prof_boot0 JEMALLOC_N(prof_boot0)
#define prof_boot1 JEMALLOC_N(prof_boot1)
#define prof_boot2 JEMALLOC_N(prof_boot2)
#define prof_bt_count JEMALLOC_N(prof_bt_count)
#define prof_cnt_all JEMALLOC_N(prof_cnt_all)
#define prof_dump_header JEMALLOC_N(prof_dump_header)
#define prof_dump_open JEMALLOC_N(prof_dump_open)
#define prof_free_sampled_object JEMALLOC_N(prof_free_sampled_object)
#define prof_gdump JEMALLOC_N(prof_gdump)
#define prof_gdump_get JEMALLOC_N(prof_gdump_get)
#define prof_gdump_set JEMALLOC_N(prof_gdump_set)
#define prof_gdump_val JEMALLOC_N(prof_gdump_val)
#define prof_idump JEMALLOC_N(prof_idump)
#define prof_interval JEMALLOC_N(prof_interval)
#define prof_lookup JEMALLOC_N(prof_lookup)
#define prof_malloc_sample_object JEMALLOC_N(prof_malloc_sample_object)
#define prof_mdump JEMALLOC_N(prof_mdump)
#define prof_postfork_child JEMALLOC_N(prof_postfork_child)
#define prof_postfork_parent JEMALLOC_N(prof_postfork_parent)
#define prof_prefork0 JEMALLOC_N(prof_prefork0)
#define prof_prefork1 JEMALLOC_N(prof_prefork1)
#define prof_reset JEMALLOC_N(prof_reset)
#define prof_sample_threshold_update JEMALLOC_N(prof_sample_threshold_update)
#define prof_tdata_cleanup JEMALLOC_N(prof_tdata_cleanup)
#define prof_tdata_count JEMALLOC_N(prof_tdata_count)
#define prof_tdata_init JEMALLOC_N(prof_tdata_init)
#define prof_tdata_reinit JEMALLOC_N(prof_tdata_reinit)
#define prof_thread_active_get JEMALLOC_N(prof_thread_active_get)
#define prof_thread_active_init_get JEMALLOC_N(prof_thread_active_init_get)
#define prof_thread_active_init_set JEMALLOC_N(prof_thread_active_init_set)
#define prof_thread_active_set JEMALLOC_N(prof_thread_active_set)
#define prof_thread_name_get JEMALLOC_N(prof_thread_name_get)
#define prof_thread_name_set JEMALLOC_N(prof_thread_name_set)
#define rtree_ctx_data_init JEMALLOC_N(rtree_ctx_data_init)
#define rtree_delete JEMALLOC_N(rtree_delete)
#define rtree_leaf_alloc JEMALLOC_N(rtree_leaf_alloc)
#define rtree_leaf_dalloc JEMALLOC_N(rtree_leaf_dalloc)
#define rtree_leaf_elm_lookup_hard JEMALLOC_N(rtree_leaf_elm_lookup_hard)
#define rtree_new JEMALLOC_N(rtree_new)
#define rtree_node_alloc JEMALLOC_N(rtree_node_alloc)
#define rtree_node_dalloc JEMALLOC_N(rtree_node_dalloc)
#define arena_mutex_names JEMALLOC_N(arena_mutex_names)
#define global_mutex_names JEMALLOC_N(global_mutex_names)
#define opt_stats_print JEMALLOC_N(opt_stats_print)
#define opt_stats_print_opts JEMALLOC_N(opt_stats_print_opts)
#define stats_print JEMALLOC_N(stats_print)
#define sz_index2size_tab JEMALLOC_N(sz_index2size_tab)
#define sz_pind2sz_tab JEMALLOC_N(sz_pind2sz_tab)
#define sz_size2index_tab JEMALLOC_N(sz_size2index_tab)
#define nhbins JEMALLOC_N(nhbins)
#define opt_lg_tcache_max JEMALLOC_N(opt_lg_tcache_max)
#define opt_tcache JEMALLOC_N(opt_tcache)
#define tcache_alloc_small_hard JEMALLOC_N(tcache_alloc_small_hard)
#define tcache_arena_associate JEMALLOC_N(tcache_arena_associate)
#define tcache_arena_reassociate JEMALLOC_N(tcache_arena_reassociate)
#define tcache_bin_flush_large JEMALLOC_N(tcache_bin_flush_large)
#define tcache_bin_flush_small JEMALLOC_N(tcache_bin_flush_small)
#define tcache_bin_info JEMALLOC_N(tcache_bin_info)
#define tcache_boot JEMALLOC_N(tcache_boot)
#define tcache_cleanup JEMALLOC_N(tcache_cleanup)
#define tcache_create_explicit JEMALLOC_N(tcache_create_explicit)
#define tcache_event_hard JEMALLOC_N(tcache_event_hard)
#define tcache_flush JEMALLOC_N(tcache_flush)
#define tcache_maxclass JEMALLOC_N(tcache_maxclass)
#define tcache_postfork_child JEMALLOC_N(tcache_postfork_child)
#define tcache_postfork_parent JEMALLOC_N(tcache_postfork_parent)
#define tcache_prefork JEMALLOC_N(tcache_prefork)
#define tcaches JEMALLOC_N(tcaches)
#define tcache_salloc JEMALLOC_N(tcache_salloc)
#define tcaches_create JEMALLOC_N(tcaches_create)
#define tcaches_destroy JEMALLOC_N(tcaches_destroy)
#define tcaches_flush JEMALLOC_N(tcaches_flush)
#define tcache_stats_merge JEMALLOC_N(tcache_stats_merge)
#define tsd_tcache_data_init JEMALLOC_N(tsd_tcache_data_init)
#define tsd_tcache_enabled_data_init JEMALLOC_N(tsd_tcache_enabled_data_init)
#define malloc_tsd_boot0 JEMALLOC_N(malloc_tsd_boot0)
#define malloc_tsd_boot1 JEMALLOC_N(malloc_tsd_boot1)
#define malloc_tsd_cleanup_register JEMALLOC_N(malloc_tsd_cleanup_register)
#define malloc_tsd_dalloc JEMALLOC_N(malloc_tsd_dalloc)
#define malloc_tsd_malloc JEMALLOC_N(malloc_tsd_malloc)
#define tsd_boot_wrapper JEMALLOC_N(tsd_boot_wrapper)
#define tsd_booted JEMALLOC_N(tsd_booted)
#define tsd_cleanup JEMALLOC_N(tsd_cleanup)
#define tsd_fetch_slow JEMALLOC_N(tsd_fetch_slow)
#define tsd_init_check_recursion JEMALLOC_N(tsd_init_check_recursion)
#define tsd_init_finish JEMALLOC_N(tsd_init_finish)
#define tsd_init_head JEMALLOC_N(tsd_init_head)
#define tsd_slow_update JEMALLOC_N(tsd_slow_update)
#define tsd_tls JEMALLOC_N(tsd_tls)
#define tsd_tsd JEMALLOC_N(tsd_tsd)
#define witness_depth_error JEMALLOC_N(witness_depth_error)
#define witnesses_cleanup JEMALLOC_N(witnesses_cleanup)
#define witness_init JEMALLOC_N(witness_init)
#define witness_lock_error JEMALLOC_N(witness_lock_error)
#define witness_not_owner_error JEMALLOC_N(witness_not_owner_error)
#define witness_owner_error JEMALLOC_N(witness_owner_error)
#define witness_postfork_child JEMALLOC_N(witness_postfork_child)
#define witness_postfork_parent JEMALLOC_N(witness_postfork_parent)
#define witness_prefork JEMALLOC_N(witness_prefork)
