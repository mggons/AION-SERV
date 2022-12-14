/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_H_INCLUDED
# define YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int MYSQLdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_SYM = 258,
    ACCESSIBLE_SYM = 259,
    ACTION = 260,
    ADD = 261,
    ADMIN_SYM = 262,
    ADDDATE_SYM = 263,
    AFTER_SYM = 264,
    AGAINST = 265,
    AGGREGATE_SYM = 266,
    ALGORITHM_SYM = 267,
    ALL = 268,
    ALTER = 269,
    ALWAYS_SYM = 270,
    ANALYZE_SYM = 271,
    AND_AND_SYM = 272,
    AND_SYM = 273,
    ANY_SYM = 274,
    AS = 275,
    ASC = 276,
    ASCII_SYM = 277,
    ASENSITIVE_SYM = 278,
    AT_SYM = 279,
    ATOMIC_SYM = 280,
    AUTHORS_SYM = 281,
    AUTOEXTEND_SIZE_SYM = 282,
    AUTO_INC = 283,
    AUTO_SYM = 284,
    AVG_ROW_LENGTH = 285,
    AVG_SYM = 286,
    BACKUP_SYM = 287,
    BEFORE_SYM = 288,
    BEGIN_SYM = 289,
    BETWEEN_SYM = 290,
    BIGINT = 291,
    BINARY = 292,
    BINLOG_SYM = 293,
    BIN_NUM = 294,
    BIT_AND = 295,
    BIT_OR = 296,
    BIT_SYM = 297,
    BIT_XOR = 298,
    BLOB_SYM = 299,
    BLOCK_SYM = 300,
    BOOLEAN_SYM = 301,
    BOOL_SYM = 302,
    BOTH = 303,
    BTREE_SYM = 304,
    BY = 305,
    BYTE_SYM = 306,
    CACHE_SYM = 307,
    CALL_SYM = 308,
    CASCADE = 309,
    CASCADED = 310,
    CASE_SYM = 311,
    CAST_SYM = 312,
    CATALOG_NAME_SYM = 313,
    CHAIN_SYM = 314,
    CHANGE = 315,
    CHANGED = 316,
    CHARSET = 317,
    CHAR_SYM = 318,
    CHECKPOINT_SYM = 319,
    CHECKSUM_SYM = 320,
    CHECK_SYM = 321,
    CIPHER_SYM = 322,
    CLASS_ORIGIN_SYM = 323,
    CLIENT_SYM = 324,
    CLOSE_SYM = 325,
    COALESCE = 326,
    CODE_SYM = 327,
    COLLATE_SYM = 328,
    COLLATION_SYM = 329,
    COLUMNS = 330,
    COLUMN_ADD_SYM = 331,
    COLUMN_CHECK_SYM = 332,
    COLUMN_CREATE_SYM = 333,
    COLUMN_DELETE_SYM = 334,
    COLUMN_GET_SYM = 335,
    COLUMN_SYM = 336,
    COLUMN_NAME_SYM = 337,
    COMMENT_SYM = 338,
    COMMITTED_SYM = 339,
    COMMIT_SYM = 340,
    COMPACT_SYM = 341,
    COMPLETION_SYM = 342,
    COMPRESSED_SYM = 343,
    CONCURRENT = 344,
    CONDITION_SYM = 345,
    CONNECTION_SYM = 346,
    CONSISTENT_SYM = 347,
    CONSTRAINT = 348,
    CONSTRAINT_CATALOG_SYM = 349,
    CONSTRAINT_NAME_SYM = 350,
    CONSTRAINT_SCHEMA_SYM = 351,
    CONTAINS_SYM = 352,
    CONTEXT_SYM = 353,
    CONTINUE_SYM = 354,
    CONTRIBUTORS_SYM = 355,
    CONVERT_SYM = 356,
    COUNT_SYM = 357,
    CPU_SYM = 358,
    CREATE = 359,
    CROSS = 360,
    CUBE_SYM = 361,
    CURDATE = 362,
    CURRENT_SYM = 363,
    CURRENT_USER = 364,
    CURRENT_ROLE = 365,
    CURRENT_POS_SYM = 366,
    CURSOR_SYM = 367,
    CURSOR_NAME_SYM = 368,
    CURTIME = 369,
    DATABASE = 370,
    DATABASES = 371,
    DATAFILE_SYM = 372,
    DATA_SYM = 373,
    DATETIME = 374,
    DATE_ADD_INTERVAL = 375,
    DATE_SUB_INTERVAL = 376,
    DATE_SYM = 377,
    DAY_HOUR_SYM = 378,
    DAY_MICROSECOND_SYM = 379,
    DAY_MINUTE_SYM = 380,
    DAY_SECOND_SYM = 381,
    DAY_SYM = 382,
    DEALLOCATE_SYM = 383,
    DECIMAL_NUM = 384,
    DECIMAL_SYM = 385,
    DECLARE_SYM = 386,
    DEFAULT = 387,
    DEFINER_SYM = 388,
    DELAYED_SYM = 389,
    DELAY_KEY_WRITE_SYM = 390,
    DELETE_SYM = 391,
    DELETE_DOMAIN_ID_SYM = 392,
    DESC = 393,
    DESCRIBE = 394,
    DES_KEY_FILE = 395,
    DETERMINISTIC_SYM = 396,
    DIAGNOSTICS_SYM = 397,
    DIRECTORY_SYM = 398,
    DISABLE_SYM = 399,
    DISCARD = 400,
    DISK_SYM = 401,
    DISTINCT = 402,
    DIV_SYM = 403,
    DOUBLE_SYM = 404,
    DO_DOMAIN_IDS_SYM = 405,
    DO_SYM = 406,
    DROP = 407,
    DUAL_SYM = 408,
    DUMPFILE = 409,
    DUPLICATE_SYM = 410,
    DYNAMIC_SYM = 411,
    EACH_SYM = 412,
    ELSE = 413,
    ELSEIF_SYM = 414,
    ENABLE_SYM = 415,
    ENCLOSED = 416,
    END = 417,
    ENDS_SYM = 418,
    END_OF_INPUT = 419,
    ENGINES_SYM = 420,
    ENGINE_SYM = 421,
    ENUM = 422,
    EQUAL_SYM = 423,
    ERROR_SYM = 424,
    ERRORS = 425,
    ESCAPED = 426,
    ESCAPE_SYM = 427,
    EVENTS_SYM = 428,
    EVENT_SYM = 429,
    EVERY_SYM = 430,
    EXCHANGE_SYM = 431,
    EXAMINED_SYM = 432,
    EXECUTE_SYM = 433,
    EXISTS = 434,
    EXIT_SYM = 435,
    EXPANSION_SYM = 436,
    EXPORT_SYM = 437,
    EXTENDED_SYM = 438,
    EXTENT_SIZE_SYM = 439,
    EXTRACT_SYM = 440,
    FALSE_SYM = 441,
    FAST_SYM = 442,
    FAULTS_SYM = 443,
    FETCH_SYM = 444,
    FILE_SYM = 445,
    FIRST_SYM = 446,
    FIXED_SYM = 447,
    FLOAT_NUM = 448,
    FLOAT_SYM = 449,
    FLUSH_SYM = 450,
    FORCE_SYM = 451,
    FOREIGN = 452,
    FOR_SYM = 453,
    FORMAT_SYM = 454,
    FOUND_SYM = 455,
    FROM = 456,
    FULL = 457,
    FULLTEXT_SYM = 458,
    FUNCTION_SYM = 459,
    GE = 460,
    GENERAL = 461,
    GENERATED_SYM = 462,
    GEOMETRYCOLLECTION = 463,
    GEOMETRY_SYM = 464,
    GET_FORMAT = 465,
    GET_SYM = 466,
    GLOBAL_SYM = 467,
    GRANT = 468,
    GRANTS = 469,
    GROUP_SYM = 470,
    GROUP_CONCAT_SYM = 471,
    HANDLER_SYM = 472,
    HARD_SYM = 473,
    HASH_SYM = 474,
    HAVING = 475,
    HELP_SYM = 476,
    HEX_NUM = 477,
    HEX_STRING = 478,
    HIGH_PRIORITY = 479,
    HOST_SYM = 480,
    HOSTS_SYM = 481,
    HOUR_MICROSECOND_SYM = 482,
    HOUR_MINUTE_SYM = 483,
    HOUR_SECOND_SYM = 484,
    HOUR_SYM = 485,
    ID_SYM = 486,
    IDENT = 487,
    IDENTIFIED_SYM = 488,
    IDENT_QUOTED = 489,
    IF_SYM = 490,
    IGNORE_DOMAIN_IDS_SYM = 491,
    IGNORE_SYM = 492,
    IGNORE_SERVER_IDS_SYM = 493,
    IMPORT = 494,
    INDEXES = 495,
    INDEX_SYM = 496,
    INFILE = 497,
    INITIAL_SIZE_SYM = 498,
    INNER_SYM = 499,
    INOUT_SYM = 500,
    INSENSITIVE_SYM = 501,
    INSERT = 502,
    INSERT_METHOD = 503,
    INSTALL_SYM = 504,
    INTERVAL_SYM = 505,
    INTO = 506,
    INT_SYM = 507,
    INVOKER_SYM = 508,
    IN_SYM = 509,
    IO_SYM = 510,
    IPC_SYM = 511,
    IS = 512,
    ISOLATION = 513,
    ISSUER_SYM = 514,
    ITERATE_SYM = 515,
    JOIN_SYM = 516,
    KEYS = 517,
    KEY_BLOCK_SIZE = 518,
    KEY_SYM = 519,
    KILL_SYM = 520,
    LANGUAGE_SYM = 521,
    LAST_SYM = 522,
    LAST_VALUE = 523,
    LE = 524,
    LEADING = 525,
    LEAVES = 526,
    LEAVE_SYM = 527,
    LEFT = 528,
    LESS_SYM = 529,
    LEVEL_SYM = 530,
    LEX_HOSTNAME = 531,
    LIKE = 532,
    LIMIT = 533,
    LINEAR_SYM = 534,
    LINES = 535,
    LINESTRING = 536,
    LIST_SYM = 537,
    LOAD = 538,
    LOCAL_SYM = 539,
    LOCATOR_SYM = 540,
    LOCKS_SYM = 541,
    LOCK_SYM = 542,
    LOGFILE_SYM = 543,
    LOGS_SYM = 544,
    LONGBLOB = 545,
    LONGTEXT = 546,
    LONG_NUM = 547,
    LONG_SYM = 548,
    LOOP_SYM = 549,
    LOW_PRIORITY = 550,
    MASTER_CONNECT_RETRY_SYM = 551,
    MASTER_GTID_POS_SYM = 552,
    MASTER_HOST_SYM = 553,
    MASTER_LOG_FILE_SYM = 554,
    MASTER_LOG_POS_SYM = 555,
    MASTER_PASSWORD_SYM = 556,
    MASTER_PORT_SYM = 557,
    MASTER_SERVER_ID_SYM = 558,
    MASTER_SSL_CAPATH_SYM = 559,
    MASTER_SSL_CA_SYM = 560,
    MASTER_SSL_CERT_SYM = 561,
    MASTER_SSL_CIPHER_SYM = 562,
    MASTER_SSL_CRL_SYM = 563,
    MASTER_SSL_CRLPATH_SYM = 564,
    MASTER_SSL_KEY_SYM = 565,
    MASTER_SSL_SYM = 566,
    MASTER_SSL_VERIFY_SERVER_CERT_SYM = 567,
    MASTER_SYM = 568,
    MASTER_USER_SYM = 569,
    MASTER_USE_GTID_SYM = 570,
    MASTER_HEARTBEAT_PERIOD_SYM = 571,
    MATCH = 572,
    MAX_CONNECTIONS_PER_HOUR = 573,
    MAX_QUERIES_PER_HOUR = 574,
    MAX_ROWS = 575,
    MAX_SIZE_SYM = 576,
    MAX_SYM = 577,
    MAX_UPDATES_PER_HOUR = 578,
    MAX_STATEMENT_TIME_SYM = 579,
    MAX_USER_CONNECTIONS_SYM = 580,
    MAX_VALUE_SYM = 581,
    MEDIUMBLOB = 582,
    MEDIUMINT = 583,
    MEDIUMTEXT = 584,
    MEDIUM_SYM = 585,
    MEMORY_SYM = 586,
    MERGE_SYM = 587,
    MESSAGE_TEXT_SYM = 588,
    MICROSECOND_SYM = 589,
    MIGRATE_SYM = 590,
    MINUTE_MICROSECOND_SYM = 591,
    MINUTE_SECOND_SYM = 592,
    MINUTE_SYM = 593,
    MIN_ROWS = 594,
    MIN_SYM = 595,
    MODE_SYM = 596,
    MODIFIES_SYM = 597,
    MODIFY_SYM = 598,
    MOD_SYM = 599,
    MONTH_SYM = 600,
    MULTILINESTRING = 601,
    MULTIPOINT = 602,
    MULTIPOLYGON = 603,
    MUTEX_SYM = 604,
    MYSQL_SYM = 605,
    MYSQL_ERRNO_SYM = 606,
    NAMES_SYM = 607,
    NAME_SYM = 608,
    NATIONAL_SYM = 609,
    NATURAL = 610,
    NCHAR_STRING = 611,
    NCHAR_SYM = 612,
    NE = 613,
    NEG = 614,
    NEW_SYM = 615,
    NEXT_SYM = 616,
    NODEGROUP_SYM = 617,
    NONE_SYM = 618,
    NOT2_SYM = 619,
    NOT_SYM = 620,
    NOW_SYM = 621,
    NO_SYM = 622,
    NO_WAIT_SYM = 623,
    NO_WRITE_TO_BINLOG = 624,
    NULL_SYM = 625,
    NUM = 626,
    NUMBER_SYM = 627,
    NUMERIC_SYM = 628,
    NVARCHAR_SYM = 629,
    OFFSET_SYM = 630,
    OLD_PASSWORD_SYM = 631,
    ON = 632,
    ONE_SYM = 633,
    ONLY_SYM = 634,
    ONLINE_SYM = 635,
    OPEN_SYM = 636,
    OPTIMIZE = 637,
    OPTIONS_SYM = 638,
    OPTION = 639,
    OPTIONALLY = 640,
    OR2_SYM = 641,
    ORDER_SYM = 642,
    OR_OR_SYM = 643,
    OR_SYM = 644,
    OUTER = 645,
    OUTFILE = 646,
    OUT_SYM = 647,
    OWNER_SYM = 648,
    PACK_KEYS_SYM = 649,
    PAGE_SYM = 650,
    PAGE_CHECKSUM_SYM = 651,
    PARAM_MARKER = 652,
    PARSER_SYM = 653,
    PARSE_VCOL_EXPR_SYM = 654,
    PARTIAL = 655,
    PARTITION_SYM = 656,
    PARTITIONS_SYM = 657,
    PARTITIONING_SYM = 658,
    PASSWORD_SYM = 659,
    PERSISTENT_SYM = 660,
    PHASE_SYM = 661,
    PLUGINS_SYM = 662,
    PLUGIN_SYM = 663,
    POINT_SYM = 664,
    POLYGON = 665,
    PORT_SYM = 666,
    POSITION_SYM = 667,
    PRECISION = 668,
    PREPARE_SYM = 669,
    PRESERVE_SYM = 670,
    PREV_SYM = 671,
    PRIMARY_SYM = 672,
    PRIVILEGES = 673,
    PROCEDURE_SYM = 674,
    PROCESS = 675,
    PROCESSLIST_SYM = 676,
    PROFILE_SYM = 677,
    PROFILES_SYM = 678,
    PROXY_SYM = 679,
    PURGE = 680,
    QUARTER_SYM = 681,
    QUERY_SYM = 682,
    QUICK = 683,
    RANGE_SYM = 684,
    READS_SYM = 685,
    READ_ONLY_SYM = 686,
    READ_SYM = 687,
    READ_WRITE_SYM = 688,
    REAL = 689,
    REBUILD_SYM = 690,
    RECOVER_SYM = 691,
    REDOFILE_SYM = 692,
    REDO_BUFFER_SIZE_SYM = 693,
    REDUNDANT_SYM = 694,
    REFERENCES = 695,
    REGEXP = 696,
    RELAY = 697,
    RELAYLOG_SYM = 698,
    RELAY_LOG_FILE_SYM = 699,
    RELAY_LOG_POS_SYM = 700,
    RELAY_THREAD = 701,
    RELEASE_SYM = 702,
    RELOAD = 703,
    REMOVE_SYM = 704,
    RENAME = 705,
    REORGANIZE_SYM = 706,
    REPAIR = 707,
    REPEATABLE_SYM = 708,
    REPEAT_SYM = 709,
    REPLACE = 710,
    REPLICATION = 711,
    REQUIRE_SYM = 712,
    RESET_SYM = 713,
    RESIGNAL_SYM = 714,
    RESOURCES = 715,
    RESTORE_SYM = 716,
    RESTRICT = 717,
    RESUME_SYM = 718,
    RETURNED_SQLSTATE_SYM = 719,
    RETURNING_SYM = 720,
    RETURNS_SYM = 721,
    RETURN_SYM = 722,
    REVERSE_SYM = 723,
    REVOKE = 724,
    RIGHT = 725,
    ROLE_SYM = 726,
    ROLLBACK_SYM = 727,
    ROLLUP_SYM = 728,
    ROUTINE_SYM = 729,
    ROWS_SYM = 730,
    ROW_FORMAT_SYM = 731,
    ROW_SYM = 732,
    ROW_COUNT_SYM = 733,
    RTREE_SYM = 734,
    SAVEPOINT_SYM = 735,
    SCHEDULE_SYM = 736,
    SCHEMA_NAME_SYM = 737,
    SECOND_MICROSECOND_SYM = 738,
    SECOND_SYM = 739,
    SECURITY_SYM = 740,
    SELECT_SYM = 741,
    SENSITIVE_SYM = 742,
    SEPARATOR_SYM = 743,
    SERIALIZABLE_SYM = 744,
    SERIAL_SYM = 745,
    SESSION_SYM = 746,
    SERVER_SYM = 747,
    SERVER_OPTIONS = 748,
    SET = 749,
    SET_VAR = 750,
    SHARE_SYM = 751,
    SHIFT_LEFT = 752,
    SHIFT_RIGHT = 753,
    SHOW = 754,
    SHUTDOWN = 755,
    SIGNAL_SYM = 756,
    SIGNED_SYM = 757,
    SIMPLE_SYM = 758,
    SLAVE = 759,
    SLAVES = 760,
    SLAVE_POS_SYM = 761,
    SLOW = 762,
    SMALLINT = 763,
    SNAPSHOT_SYM = 764,
    SOCKET_SYM = 765,
    SOFT_SYM = 766,
    SONAME_SYM = 767,
    SOUNDS_SYM = 768,
    SOURCE_SYM = 769,
    SPATIAL_SYM = 770,
    SPECIFIC_SYM = 771,
    SQLEXCEPTION_SYM = 772,
    SQLSTATE_SYM = 773,
    SQLWARNING_SYM = 774,
    SQL_BIG_RESULT = 775,
    SQL_BUFFER_RESULT = 776,
    SQL_CACHE_SYM = 777,
    SQL_CALC_FOUND_ROWS = 778,
    SQL_NO_CACHE_SYM = 779,
    SQL_SMALL_RESULT = 780,
    SQL_SYM = 781,
    SQL_THREAD = 782,
    REF_SYSTEM_ID_SYM = 783,
    SSL_SYM = 784,
    STARTING = 785,
    STARTS_SYM = 786,
    START_SYM = 787,
    STATEMENT_SYM = 788,
    STATS_AUTO_RECALC_SYM = 789,
    STATS_PERSISTENT_SYM = 790,
    STATS_SAMPLE_PAGES_SYM = 791,
    STATUS_SYM = 792,
    STDDEV_SAMP_SYM = 793,
    STD_SYM = 794,
    STOP_SYM = 795,
    STORAGE_SYM = 796,
    STRAIGHT_JOIN = 797,
    STRING_SYM = 798,
    SUBCLASS_ORIGIN_SYM = 799,
    SUBDATE_SYM = 800,
    SUBJECT_SYM = 801,
    SUBPARTITIONS_SYM = 802,
    SUBPARTITION_SYM = 803,
    SUBSTRING = 804,
    SUM_SYM = 805,
    SUPER_SYM = 806,
    SUSPEND_SYM = 807,
    SWAPS_SYM = 808,
    SWITCHES_SYM = 809,
    SYSDATE = 810,
    TABLES = 811,
    TABLESPACE = 812,
    TABLE_REF_PRIORITY = 813,
    TABLE_SYM = 814,
    TABLE_CHECKSUM_SYM = 815,
    TABLE_NAME_SYM = 816,
    TEMPORARY = 817,
    TEMPTABLE_SYM = 818,
    TERMINATED = 819,
    TEXT_STRING = 820,
    TEXT_SYM = 821,
    THAN_SYM = 822,
    THEN_SYM = 823,
    TIMESTAMP = 824,
    TIMESTAMP_ADD = 825,
    TIMESTAMP_DIFF = 826,
    TIME_SYM = 827,
    TINYBLOB = 828,
    TINYINT = 829,
    TINYTEXT = 830,
    TO_SYM = 831,
    TRAILING = 832,
    TRANSACTION_SYM = 833,
    TRANSACTIONAL_SYM = 834,
    TRIGGERS_SYM = 835,
    TRIGGER_SYM = 836,
    TRIM = 837,
    TRUE_SYM = 838,
    TRUNCATE_SYM = 839,
    TYPES_SYM = 840,
    TYPE_SYM = 841,
    UDF_RETURNS_SYM = 842,
    ULONGLONG_NUM = 843,
    UNCOMMITTED_SYM = 844,
    UNDEFINED_SYM = 845,
    UNDERSCORE_CHARSET = 846,
    UNDOFILE_SYM = 847,
    UNDO_BUFFER_SIZE_SYM = 848,
    UNDO_SYM = 849,
    UNICODE_SYM = 850,
    UNINSTALL_SYM = 851,
    UNION_SYM = 852,
    UNIQUE_SYM = 853,
    UNKNOWN_SYM = 854,
    UNLOCK_SYM = 855,
    UNSIGNED = 856,
    UNTIL_SYM = 857,
    UPDATE_SYM = 858,
    UPGRADE_SYM = 859,
    USAGE = 860,
    USER = 861,
    USE_FRM = 862,
    USE_SYM = 863,
    USING = 864,
    UTC_DATE_SYM = 865,
    UTC_TIMESTAMP_SYM = 866,
    UTC_TIME_SYM = 867,
    VALUES = 868,
    VALUE_SYM = 869,
    VARBINARY = 870,
    VARCHAR = 871,
    VARIABLES = 872,
    VARIANCE_SYM = 873,
    VARYING = 874,
    VAR_SAMP_SYM = 875,
    VIA_SYM = 876,
    VIEW_SYM = 877,
    VIRTUAL_SYM = 878,
    WAIT_SYM = 879,
    WARNINGS = 880,
    WEEK_SYM = 881,
    WEIGHT_STRING_SYM = 882,
    WHEN_SYM = 883,
    WHERE = 884,
    WHILE_SYM = 885,
    WITH = 886,
    WITH_CUBE_SYM = 887,
    WITH_ROLLUP_SYM = 888,
    WORK_SYM = 889,
    WRAPPER_SYM = 890,
    WRITE_SYM = 891,
    X509_SYM = 892,
    XA_SYM = 893,
    XML_SYM = 894,
    XOR = 895,
    YEAR_MONTH_SYM = 896,
    YEAR_SYM = 897,
    ZEROFILL = 898,
    IMPOSSIBLE_ACTION = 899
  };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADMIN_SYM 262
#define ADDDATE_SYM 263
#define AFTER_SYM 264
#define AGAINST 265
#define AGGREGATE_SYM 266
#define ALGORITHM_SYM 267
#define ALL 268
#define ALTER 269
#define ALWAYS_SYM 270
#define ANALYZE_SYM 271
#define AND_AND_SYM 272
#define AND_SYM 273
#define ANY_SYM 274
#define AS 275
#define ASC 276
#define ASCII_SYM 277
#define ASENSITIVE_SYM 278
#define AT_SYM 279
#define ATOMIC_SYM 280
#define AUTHORS_SYM 281
#define AUTOEXTEND_SIZE_SYM 282
#define AUTO_INC 283
#define AUTO_SYM 284
#define AVG_ROW_LENGTH 285
#define AVG_SYM 286
#define BACKUP_SYM 287
#define BEFORE_SYM 288
#define BEGIN_SYM 289
#define BETWEEN_SYM 290
#define BIGINT 291
#define BINARY 292
#define BINLOG_SYM 293
#define BIN_NUM 294
#define BIT_AND 295
#define BIT_OR 296
#define BIT_SYM 297
#define BIT_XOR 298
#define BLOB_SYM 299
#define BLOCK_SYM 300
#define BOOLEAN_SYM 301
#define BOOL_SYM 302
#define BOTH 303
#define BTREE_SYM 304
#define BY 305
#define BYTE_SYM 306
#define CACHE_SYM 307
#define CALL_SYM 308
#define CASCADE 309
#define CASCADED 310
#define CASE_SYM 311
#define CAST_SYM 312
#define CATALOG_NAME_SYM 313
#define CHAIN_SYM 314
#define CHANGE 315
#define CHANGED 316
#define CHARSET 317
#define CHAR_SYM 318
#define CHECKPOINT_SYM 319
#define CHECKSUM_SYM 320
#define CHECK_SYM 321
#define CIPHER_SYM 322
#define CLASS_ORIGIN_SYM 323
#define CLIENT_SYM 324
#define CLOSE_SYM 325
#define COALESCE 326
#define CODE_SYM 327
#define COLLATE_SYM 328
#define COLLATION_SYM 329
#define COLUMNS 330
#define COLUMN_ADD_SYM 331
#define COLUMN_CHECK_SYM 332
#define COLUMN_CREATE_SYM 333
#define COLUMN_DELETE_SYM 334
#define COLUMN_GET_SYM 335
#define COLUMN_SYM 336
#define COLUMN_NAME_SYM 337
#define COMMENT_SYM 338
#define COMMITTED_SYM 339
#define COMMIT_SYM 340
#define COMPACT_SYM 341
#define COMPLETION_SYM 342
#define COMPRESSED_SYM 343
#define CONCURRENT 344
#define CONDITION_SYM 345
#define CONNECTION_SYM 346
#define CONSISTENT_SYM 347
#define CONSTRAINT 348
#define CONSTRAINT_CATALOG_SYM 349
#define CONSTRAINT_NAME_SYM 350
#define CONSTRAINT_SCHEMA_SYM 351
#define CONTAINS_SYM 352
#define CONTEXT_SYM 353
#define CONTINUE_SYM 354
#define CONTRIBUTORS_SYM 355
#define CONVERT_SYM 356
#define COUNT_SYM 357
#define CPU_SYM 358
#define CREATE 359
#define CROSS 360
#define CUBE_SYM 361
#define CURDATE 362
#define CURRENT_SYM 363
#define CURRENT_USER 364
#define CURRENT_ROLE 365
#define CURRENT_POS_SYM 366
#define CURSOR_SYM 367
#define CURSOR_NAME_SYM 368
#define CURTIME 369
#define DATABASE 370
#define DATABASES 371
#define DATAFILE_SYM 372
#define DATA_SYM 373
#define DATETIME 374
#define DATE_ADD_INTERVAL 375
#define DATE_SUB_INTERVAL 376
#define DATE_SYM 377
#define DAY_HOUR_SYM 378
#define DAY_MICROSECOND_SYM 379
#define DAY_MINUTE_SYM 380
#define DAY_SECOND_SYM 381
#define DAY_SYM 382
#define DEALLOCATE_SYM 383
#define DECIMAL_NUM 384
#define DECIMAL_SYM 385
#define DECLARE_SYM 386
#define DEFAULT 387
#define DEFINER_SYM 388
#define DELAYED_SYM 389
#define DELAY_KEY_WRITE_SYM 390
#define DELETE_SYM 391
#define DELETE_DOMAIN_ID_SYM 392
#define DESC 393
#define DESCRIBE 394
#define DES_KEY_FILE 395
#define DETERMINISTIC_SYM 396
#define DIAGNOSTICS_SYM 397
#define DIRECTORY_SYM 398
#define DISABLE_SYM 399
#define DISCARD 400
#define DISK_SYM 401
#define DISTINCT 402
#define DIV_SYM 403
#define DOUBLE_SYM 404
#define DO_DOMAIN_IDS_SYM 405
#define DO_SYM 406
#define DROP 407
#define DUAL_SYM 408
#define DUMPFILE 409
#define DUPLICATE_SYM 410
#define DYNAMIC_SYM 411
#define EACH_SYM 412
#define ELSE 413
#define ELSEIF_SYM 414
#define ENABLE_SYM 415
#define ENCLOSED 416
#define END 417
#define ENDS_SYM 418
#define END_OF_INPUT 419
#define ENGINES_SYM 420
#define ENGINE_SYM 421
#define ENUM 422
#define EQUAL_SYM 423
#define ERROR_SYM 424
#define ERRORS 425
#define ESCAPED 426
#define ESCAPE_SYM 427
#define EVENTS_SYM 428
#define EVENT_SYM 429
#define EVERY_SYM 430
#define EXCHANGE_SYM 431
#define EXAMINED_SYM 432
#define EXECUTE_SYM 433
#define EXISTS 434
#define EXIT_SYM 435
#define EXPANSION_SYM 436
#define EXPORT_SYM 437
#define EXTENDED_SYM 438
#define EXTENT_SIZE_SYM 439
#define EXTRACT_SYM 440
#define FALSE_SYM 441
#define FAST_SYM 442
#define FAULTS_SYM 443
#define FETCH_SYM 444
#define FILE_SYM 445
#define FIRST_SYM 446
#define FIXED_SYM 447
#define FLOAT_NUM 448
#define FLOAT_SYM 449
#define FLUSH_SYM 450
#define FORCE_SYM 451
#define FOREIGN 452
#define FOR_SYM 453
#define FORMAT_SYM 454
#define FOUND_SYM 455
#define FROM 456
#define FULL 457
#define FULLTEXT_SYM 458
#define FUNCTION_SYM 459
#define GE 460
#define GENERAL 461
#define GENERATED_SYM 462
#define GEOMETRYCOLLECTION 463
#define GEOMETRY_SYM 464
#define GET_FORMAT 465
#define GET_SYM 466
#define GLOBAL_SYM 467
#define GRANT 468
#define GRANTS 469
#define GROUP_SYM 470
#define GROUP_CONCAT_SYM 471
#define HANDLER_SYM 472
#define HARD_SYM 473
#define HASH_SYM 474
#define HAVING 475
#define HELP_SYM 476
#define HEX_NUM 477
#define HEX_STRING 478
#define HIGH_PRIORITY 479
#define HOST_SYM 480
#define HOSTS_SYM 481
#define HOUR_MICROSECOND_SYM 482
#define HOUR_MINUTE_SYM 483
#define HOUR_SECOND_SYM 484
#define HOUR_SYM 485
#define ID_SYM 486
#define IDENT 487
#define IDENTIFIED_SYM 488
#define IDENT_QUOTED 489
#define IF_SYM 490
#define IGNORE_DOMAIN_IDS_SYM 491
#define IGNORE_SYM 492
#define IGNORE_SERVER_IDS_SYM 493
#define IMPORT 494
#define INDEXES 495
#define INDEX_SYM 496
#define INFILE 497
#define INITIAL_SIZE_SYM 498
#define INNER_SYM 499
#define INOUT_SYM 500
#define INSENSITIVE_SYM 501
#define INSERT 502
#define INSERT_METHOD 503
#define INSTALL_SYM 504
#define INTERVAL_SYM 505
#define INTO 506
#define INT_SYM 507
#define INVOKER_SYM 508
#define IN_SYM 509
#define IO_SYM 510
#define IPC_SYM 511
#define IS 512
#define ISOLATION 513
#define ISSUER_SYM 514
#define ITERATE_SYM 515
#define JOIN_SYM 516
#define KEYS 517
#define KEY_BLOCK_SIZE 518
#define KEY_SYM 519
#define KILL_SYM 520
#define LANGUAGE_SYM 521
#define LAST_SYM 522
#define LAST_VALUE 523
#define LE 524
#define LEADING 525
#define LEAVES 526
#define LEAVE_SYM 527
#define LEFT 528
#define LESS_SYM 529
#define LEVEL_SYM 530
#define LEX_HOSTNAME 531
#define LIKE 532
#define LIMIT 533
#define LINEAR_SYM 534
#define LINES 535
#define LINESTRING 536
#define LIST_SYM 537
#define LOAD 538
#define LOCAL_SYM 539
#define LOCATOR_SYM 540
#define LOCKS_SYM 541
#define LOCK_SYM 542
#define LOGFILE_SYM 543
#define LOGS_SYM 544
#define LONGBLOB 545
#define LONGTEXT 546
#define LONG_NUM 547
#define LONG_SYM 548
#define LOOP_SYM 549
#define LOW_PRIORITY 550
#define MASTER_CONNECT_RETRY_SYM 551
#define MASTER_GTID_POS_SYM 552
#define MASTER_HOST_SYM 553
#define MASTER_LOG_FILE_SYM 554
#define MASTER_LOG_POS_SYM 555
#define MASTER_PASSWORD_SYM 556
#define MASTER_PORT_SYM 557
#define MASTER_SERVER_ID_SYM 558
#define MASTER_SSL_CAPATH_SYM 559
#define MASTER_SSL_CA_SYM 560
#define MASTER_SSL_CERT_SYM 561
#define MASTER_SSL_CIPHER_SYM 562
#define MASTER_SSL_CRL_SYM 563
#define MASTER_SSL_CRLPATH_SYM 564
#define MASTER_SSL_KEY_SYM 565
#define MASTER_SSL_SYM 566
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 567
#define MASTER_SYM 568
#define MASTER_USER_SYM 569
#define MASTER_USE_GTID_SYM 570
#define MASTER_HEARTBEAT_PERIOD_SYM 571
#define MATCH 572
#define MAX_CONNECTIONS_PER_HOUR 573
#define MAX_QUERIES_PER_HOUR 574
#define MAX_ROWS 575
#define MAX_SIZE_SYM 576
#define MAX_SYM 577
#define MAX_UPDATES_PER_HOUR 578
#define MAX_STATEMENT_TIME_SYM 579
#define MAX_USER_CONNECTIONS_SYM 580
#define MAX_VALUE_SYM 581
#define MEDIUMBLOB 582
#define MEDIUMINT 583
#define MEDIUMTEXT 584
#define MEDIUM_SYM 585
#define MEMORY_SYM 586
#define MERGE_SYM 587
#define MESSAGE_TEXT_SYM 588
#define MICROSECOND_SYM 589
#define MIGRATE_SYM 590
#define MINUTE_MICROSECOND_SYM 591
#define MINUTE_SECOND_SYM 592
#define MINUTE_SYM 593
#define MIN_ROWS 594
#define MIN_SYM 595
#define MODE_SYM 596
#define MODIFIES_SYM 597
#define MODIFY_SYM 598
#define MOD_SYM 599
#define MONTH_SYM 600
#define MULTILINESTRING 601
#define MULTIPOINT 602
#define MULTIPOLYGON 603
#define MUTEX_SYM 604
#define MYSQL_SYM 605
#define MYSQL_ERRNO_SYM 606
#define NAMES_SYM 607
#define NAME_SYM 608
#define NATIONAL_SYM 609
#define NATURAL 610
#define NCHAR_STRING 611
#define NCHAR_SYM 612
#define NE 613
#define NEG 614
#define NEW_SYM 615
#define NEXT_SYM 616
#define NODEGROUP_SYM 617
#define NONE_SYM 618
#define NOT2_SYM 619
#define NOT_SYM 620
#define NOW_SYM 621
#define NO_SYM 622
#define NO_WAIT_SYM 623
#define NO_WRITE_TO_BINLOG 624
#define NULL_SYM 625
#define NUM 626
#define NUMBER_SYM 627
#define NUMERIC_SYM 628
#define NVARCHAR_SYM 629
#define OFFSET_SYM 630
#define OLD_PASSWORD_SYM 631
#define ON 632
#define ONE_SYM 633
#define ONLY_SYM 634
#define ONLINE_SYM 635
#define OPEN_SYM 636
#define OPTIMIZE 637
#define OPTIONS_SYM 638
#define OPTION 639
#define OPTIONALLY 640
#define OR2_SYM 641
#define ORDER_SYM 642
#define OR_OR_SYM 643
#define OR_SYM 644
#define OUTER 645
#define OUTFILE 646
#define OUT_SYM 647
#define OWNER_SYM 648
#define PACK_KEYS_SYM 649
#define PAGE_SYM 650
#define PAGE_CHECKSUM_SYM 651
#define PARAM_MARKER 652
#define PARSER_SYM 653
#define PARSE_VCOL_EXPR_SYM 654
#define PARTIAL 655
#define PARTITION_SYM 656
#define PARTITIONS_SYM 657
#define PARTITIONING_SYM 658
#define PASSWORD_SYM 659
#define PERSISTENT_SYM 660
#define PHASE_SYM 661
#define PLUGINS_SYM 662
#define PLUGIN_SYM 663
#define POINT_SYM 664
#define POLYGON 665
#define PORT_SYM 666
#define POSITION_SYM 667
#define PRECISION 668
#define PREPARE_SYM 669
#define PRESERVE_SYM 670
#define PREV_SYM 671
#define PRIMARY_SYM 672
#define PRIVILEGES 673
#define PROCEDURE_SYM 674
#define PROCESS 675
#define PROCESSLIST_SYM 676
#define PROFILE_SYM 677
#define PROFILES_SYM 678
#define PROXY_SYM 679
#define PURGE 680
#define QUARTER_SYM 681
#define QUERY_SYM 682
#define QUICK 683
#define RANGE_SYM 684
#define READS_SYM 685
#define READ_ONLY_SYM 686
#define READ_SYM 687
#define READ_WRITE_SYM 688
#define REAL 689
#define REBUILD_SYM 690
#define RECOVER_SYM 691
#define REDOFILE_SYM 692
#define REDO_BUFFER_SIZE_SYM 693
#define REDUNDANT_SYM 694
#define REFERENCES 695
#define REGEXP 696
#define RELAY 697
#define RELAYLOG_SYM 698
#define RELAY_LOG_FILE_SYM 699
#define RELAY_LOG_POS_SYM 700
#define RELAY_THREAD 701
#define RELEASE_SYM 702
#define RELOAD 703
#define REMOVE_SYM 704
#define RENAME 705
#define REORGANIZE_SYM 706
#define REPAIR 707
#define REPEATABLE_SYM 708
#define REPEAT_SYM 709
#define REPLACE 710
#define REPLICATION 711
#define REQUIRE_SYM 712
#define RESET_SYM 713
#define RESIGNAL_SYM 714
#define RESOURCES 715
#define RESTORE_SYM 716
#define RESTRICT 717
#define RESUME_SYM 718
#define RETURNED_SQLSTATE_SYM 719
#define RETURNING_SYM 720
#define RETURNS_SYM 721
#define RETURN_SYM 722
#define REVERSE_SYM 723
#define REVOKE 724
#define RIGHT 725
#define ROLE_SYM 726
#define ROLLBACK_SYM 727
#define ROLLUP_SYM 728
#define ROUTINE_SYM 729
#define ROWS_SYM 730
#define ROW_FORMAT_SYM 731
#define ROW_SYM 732
#define ROW_COUNT_SYM 733
#define RTREE_SYM 734
#define SAVEPOINT_SYM 735
#define SCHEDULE_SYM 736
#define SCHEMA_NAME_SYM 737
#define SECOND_MICROSECOND_SYM 738
#define SECOND_SYM 739
#define SECURITY_SYM 740
#define SELECT_SYM 741
#define SENSITIVE_SYM 742
#define SEPARATOR_SYM 743
#define SERIALIZABLE_SYM 744
#define SERIAL_SYM 745
#define SESSION_SYM 746
#define SERVER_SYM 747
#define SERVER_OPTIONS 748
#define SET 749
#define SET_VAR 750
#define SHARE_SYM 751
#define SHIFT_LEFT 752
#define SHIFT_RIGHT 753
#define SHOW 754
#define SHUTDOWN 755
#define SIGNAL_SYM 756
#define SIGNED_SYM 757
#define SIMPLE_SYM 758
#define SLAVE 759
#define SLAVES 760
#define SLAVE_POS_SYM 761
#define SLOW 762
#define SMALLINT 763
#define SNAPSHOT_SYM 764
#define SOCKET_SYM 765
#define SOFT_SYM 766
#define SONAME_SYM 767
#define SOUNDS_SYM 768
#define SOURCE_SYM 769
#define SPATIAL_SYM 770
#define SPECIFIC_SYM 771
#define SQLEXCEPTION_SYM 772
#define SQLSTATE_SYM 773
#define SQLWARNING_SYM 774
#define SQL_BIG_RESULT 775
#define SQL_BUFFER_RESULT 776
#define SQL_CACHE_SYM 777
#define SQL_CALC_FOUND_ROWS 778
#define SQL_NO_CACHE_SYM 779
#define SQL_SMALL_RESULT 780
#define SQL_SYM 781
#define SQL_THREAD 782
#define REF_SYSTEM_ID_SYM 783
#define SSL_SYM 784
#define STARTING 785
#define STARTS_SYM 786
#define START_SYM 787
#define STATEMENT_SYM 788
#define STATS_AUTO_RECALC_SYM 789
#define STATS_PERSISTENT_SYM 790
#define STATS_SAMPLE_PAGES_SYM 791
#define STATUS_SYM 792
#define STDDEV_SAMP_SYM 793
#define STD_SYM 794
#define STOP_SYM 795
#define STORAGE_SYM 796
#define STRAIGHT_JOIN 797
#define STRING_SYM 798
#define SUBCLASS_ORIGIN_SYM 799
#define SUBDATE_SYM 800
#define SUBJECT_SYM 801
#define SUBPARTITIONS_SYM 802
#define SUBPARTITION_SYM 803
#define SUBSTRING 804
#define SUM_SYM 805
#define SUPER_SYM 806
#define SUSPEND_SYM 807
#define SWAPS_SYM 808
#define SWITCHES_SYM 809
#define SYSDATE 810
#define TABLES 811
#define TABLESPACE 812
#define TABLE_REF_PRIORITY 813
#define TABLE_SYM 814
#define TABLE_CHECKSUM_SYM 815
#define TABLE_NAME_SYM 816
#define TEMPORARY 817
#define TEMPTABLE_SYM 818
#define TERMINATED 819
#define TEXT_STRING 820
#define TEXT_SYM 821
#define THAN_SYM 822
#define THEN_SYM 823
#define TIMESTAMP 824
#define TIMESTAMP_ADD 825
#define TIMESTAMP_DIFF 826
#define TIME_SYM 827
#define TINYBLOB 828
#define TINYINT 829
#define TINYTEXT 830
#define TO_SYM 831
#define TRAILING 832
#define TRANSACTION_SYM 833
#define TRANSACTIONAL_SYM 834
#define TRIGGERS_SYM 835
#define TRIGGER_SYM 836
#define TRIM 837
#define TRUE_SYM 838
#define TRUNCATE_SYM 839
#define TYPES_SYM 840
#define TYPE_SYM 841
#define UDF_RETURNS_SYM 842
#define ULONGLONG_NUM 843
#define UNCOMMITTED_SYM 844
#define UNDEFINED_SYM 845
#define UNDERSCORE_CHARSET 846
#define UNDOFILE_SYM 847
#define UNDO_BUFFER_SIZE_SYM 848
#define UNDO_SYM 849
#define UNICODE_SYM 850
#define UNINSTALL_SYM 851
#define UNION_SYM 852
#define UNIQUE_SYM 853
#define UNKNOWN_SYM 854
#define UNLOCK_SYM 855
#define UNSIGNED 856
#define UNTIL_SYM 857
#define UPDATE_SYM 858
#define UPGRADE_SYM 859
#define USAGE 860
#define USER 861
#define USE_FRM 862
#define USE_SYM 863
#define USING 864
#define UTC_DATE_SYM 865
#define UTC_TIMESTAMP_SYM 866
#define UTC_TIME_SYM 867
#define VALUES 868
#define VALUE_SYM 869
#define VARBINARY 870
#define VARCHAR 871
#define VARIABLES 872
#define VARIANCE_SYM 873
#define VARYING 874
#define VAR_SAMP_SYM 875
#define VIA_SYM 876
#define VIEW_SYM 877
#define VIRTUAL_SYM 878
#define WAIT_SYM 879
#define WARNINGS 880
#define WEEK_SYM 881
#define WEIGHT_STRING_SYM 882
#define WHEN_SYM 883
#define WHERE 884
#define WHILE_SYM 885
#define WITH 886
#define WITH_CUBE_SYM 887
#define WITH_ROLLUP_SYM 888
#define WORK_SYM 889
#define WRAPPER_SYM 890
#define WRITE_SYM 891
#define X509_SYM 892
#define XA_SYM 893
#define XML_SYM 894
#define XOR 895
#define YEAR_MONTH_SYM 896
#define YEAR_SYM 897
#define ZEROFILL 898
#define IMPOSSIBLE_ACTION 899

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 948 "/home/buildbot/git/sql/sql_yacc.yy" /* yacc.c:1909  */

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;

  /* structs */
  LEX_STRING lex_str;
  LEX_SYMBOL symbol;
  struct sys_var_with_base variable;
  struct { int vars, conds, hndlrs, curs; } spblock;

  /* pointers */
  CHARSET_INFO *charset;
  Condition_information_item *cond_info_item;
  DYNCALL_CREATE_DEF *dyncol_def;
  Diagnostics_information *diag_info;
  Item *item;
  Item_num *item_num;
  Item_param *item_param;
  Key_part_spec *key_part;
  LEX *lex;
  LEX_STRING *lex_str_ptr;
  LEX_USER *lex_user;
  List<Condition_information_item> *cond_info_list;
  List<DYNCALL_CREATE_DEF> *dyncol_def_list;
  List<Item> *item_list;
  List<Statement_information_item> *stmt_info_list;
  List<String> *string_list;
  Statement_information_item *stmt_info_item;
  String *string;
  TABLE_LIST *table_list;
  Table_ident *table;
  char *simple_string;
  chooser_compare_func_creator boolfunc2creator;
  class my_var *myvar;
  class sp_condition_value *spcondvalue;
  class sp_head *sphead;
  class sp_label *splabel;
  class sp_name *spname;
  class sp_variable *spvar;
  handlerton *db_type;
  st_select_lex *select_lex;
  struct p_elem_val *p_elem_value;
  udf_func *udf;

  /* enums */
  enum Cast_target cast_type;
  enum Condition_information_item::Name cond_info_item_name;
  enum enum_diag_condition_item_name diag_condition_item_name;
  enum Diagnostics_information::Which_area diag_area;
  enum Field::geometry_type geom_type;
  enum Foreign_key::fk_option m_fk_option;
  enum Item_udftype udf_type;
  enum Key::Keytype key_type;
  enum Statement_information_item::Name stmt_info_item_name;
  enum enum_field_types field_type;
  enum enum_filetype filetype;
  enum enum_tx_isolation tx_isolation;
  enum enum_var_type var_type;
  enum enum_yes_no_unknown m_yes_no_unk;
  enum ha_choice choice;
  enum ha_key_alg key_alg;
  enum ha_rkey_function ha_rkey_mode;
  enum index_hint_type index_hint;
  enum interval_type interval, interval_time_st;
  enum row_type row_type;
  enum sp_variable::enum_mode spvar_mode;
  enum thr_lock_type lock_type;
  enum enum_mysql_timestamp_type date_time_type;
  DDL_options_st object_ddl_options;

#line 1415 "/home/buildbot/git/mkdist/sql/sql_yacc.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int MYSQLparse (THD *thd);

#endif /* !YY_MYSQL_HOME_BUILDBOT_GIT_MKDIST_SQL_SQL_YACC_H_INCLUDED  */
